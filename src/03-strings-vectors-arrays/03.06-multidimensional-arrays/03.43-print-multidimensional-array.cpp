#include <iostream>

void print_range(int (&arr)[4][3]) {
    bool first_row = true;
    std::cout << "{";
    for (const auto& row : arr) {
        std::cout << (first_row ? "{" : ", {");
        first_row = false;
        bool first_el = true;
        for (const auto& el : row) {
            std::cout << (first_el ? "" : ", ") << el;
            first_el = false;
        }
        std::cout << "}";
    }
    std::cout << "}\n";
}

void print_pointer(int (&arr)[4][3]) {
    bool first_row = true;
    std::cout << "{";
    for (int (*row)[3] = arr; row != arr + 4; ++row) {
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

void print_subscript(int (&arr)[4][3]) {
    bool first_row = true;
    std::cout << "{";
    for (size_t row_i = 0; row_i < 4; ++row_i) {
        std::cout << (first_row ? "{" : ", {");
        first_row = false;
        bool first_el = true;
        for (size_t col_i = 0; col_i < 3; ++col_i) {
            std::cout << (first_el ? "" : ", ") << arr[row_i][col_i];
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

    print_range(arr);
    print_pointer(arr);
    print_subscript(arr);

    return 0;
}
