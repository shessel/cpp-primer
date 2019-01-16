#include <iostream>
#include <iterator>

void print_pointer_auto(const int (&arr)[4][3]) {
    bool first_row = true;
    std::cout << "{";
    for (auto row = std::cbegin(arr); row != std::cend(arr); ++row) {
        std::cout << (first_row ? "{" : ", {");
        first_row = false;
        bool first_el = true;
        for (auto el = std::cbegin(*row); el != std::cend(*row); ++el) {
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

    print_pointer_auto(arr);

    return 0;
}
