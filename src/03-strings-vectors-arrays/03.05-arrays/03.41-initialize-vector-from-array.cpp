#include <iostream>
#include <iterator>
#include <vector>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> vec{std::begin(arr), std::end(arr)};

    bool first = true;
    for (auto v : vec) {
        std::cout << (first ? "" : ", ") << v;
        first = false;
    }
    std::cout << "\n";

    return 0;
}
