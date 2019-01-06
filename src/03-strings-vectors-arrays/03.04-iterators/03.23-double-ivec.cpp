#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it = *it * 2;
    }
    
    bool first = true;
    for (auto el : ivec) {
        std::cout << (first ? "" : ", ") << el;
        first = false;
    }
    std::cout << "\n";

    return 0;
}

