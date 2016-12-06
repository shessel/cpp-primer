#include <iostream>
#include <string>

template <typename ValueType, size_t N>
void print(const ValueType (&array)[N]) {
    std::string delimiter = "";
    for (size_t i = 0; i < N; ++i) {
        std::cout << delimiter << array[i];
        delimiter = ", ";
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6, 7};
    print(intArray);

    std::string stringArray[] = {"one", "two", "three", "four", "five"};
    print(stringArray);

    return 0;
}
