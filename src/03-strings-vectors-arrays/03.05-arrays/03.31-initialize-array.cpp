#include <iostream>

int main() {
    int values[10];
    for (int i = 0; i < 10; ++i) {
        values[i] = i;
    }

    bool first = true;
    for (auto v : values) {
        std::cout << (first ? "" : ", ") << v;
        first = false;
    }
    std::cout << "\n";

    return 0;
}
