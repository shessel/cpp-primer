#include <iostream>

void print_pointer_type_alias(int (&arr)[4][3]) {
    bool first_row = true;
    std::cout << "{";
    using row_t = int[3];
    for (row_t *row = arr; row != arr + 4; ++row) {
        std::cout << (first_row ? "{" : ", {");
        first_row = false;
        bool first_el = true;
        for (int *el = *row; el != *row + 3; ++el) {
            std::cout << (first_el ? "" : ", ") << *el;
            first_el = false;
        }
        std::cout << "}";
    }
    std::cout << "}\n";
}

int main() {
    // omitted elements default to value initialization so this yields
    // {{1, 2, 3}, {0, 0, 0}, {4, 5, 0}, {0, 0, 0}}
    int arr[4][3] = {
        {1, 2, 3},
        {},
        {4, 5}
    };

    print_pointer_type_alias(arr);

    return 0;
}
