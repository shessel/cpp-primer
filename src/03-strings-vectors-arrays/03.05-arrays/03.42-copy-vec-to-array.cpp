#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10];

    for (size_t i = 0; i < vec.size(); ++i) {
        arr[i] = vec[i];
    }

    bool first = true;
    for (auto v : arr) {
        std::cout << (first ? "" : ", ") << v;
        first = false;
    }
    std::cout << "\n";

    return 0;
}
