#include <iostream>
#include <string>
#include <vector>

template <typename T>
void printSizeAndContents(std::vector<T>& vec) {
    std::cout << "vector with " << vec.size() << " elements: {";
    bool first = true;
    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        std::cout << (first ? "" : ", ") << *it;
        first = false;
    }
    std::cout << "}\n";
}

int main() {
    std::vector<int> v1; // 0 elements
    std::vector<int> v2(10); // 10 default-initialized elements with value `0`
    std::vector<int> v3(10, 42); // 10 elements with value `42`
    std::vector<int> v4{10}; // 1 element with value `10`
    std::vector<int> v5{10, 42}; // 2 elements with values 10 and 42 respectively
    std::vector<std::string> v6{10}; // 10 default-initialized elements with value `""`
    std::vector<std::string> v7{10, "hi"}; // 10 elements with value `"hi"`

    printSizeAndContents(v1);
    printSizeAndContents(v2);
    printSizeAndContents(v3);
    printSizeAndContents(v4);
    printSizeAndContents(v5);
    printSizeAndContents(v6);
    printSizeAndContents(v7);

    return 0;
}
