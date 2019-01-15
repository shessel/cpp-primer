#include <iostream>
#include <iterator>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int* p = std::begin(arr); p < std::end(arr); ++p) {
        *p = 0;
    }

    bool first = true;
    for (auto v : arr) {
        std::cout << (first ? "" : ", ") << v;
        first = false;
    }
    std::cout << "\n";
}

