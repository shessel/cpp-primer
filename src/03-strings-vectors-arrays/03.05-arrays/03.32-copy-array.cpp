#include <iostream>
#include <vector>

int main() {
    int values[10];
    for (int i = 0; i < 10; ++i) {
        values[i] = i;
    }

    int values_copy[10];
    for (int i = 0; i < 10; ++i) {
        values_copy[i] = values[i];
    }

    bool first = true;
    for (auto v : values_copy) {
        std::cout << (first ? "" : ", ") << v;
        first = false;
    }
    std::cout << "\n";

    std::vector<int> vec;
    vec.reserve(10);
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }

    std::vector<int> vec_copy{vec};

    first = true;
    for (auto v : vec_copy) {
        std::cout << (first ? "" : ", ") << v;
        first = false;
    }
    std::cout << "\n";

    return 0;
}
