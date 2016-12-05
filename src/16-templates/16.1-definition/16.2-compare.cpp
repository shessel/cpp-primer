#include <iostream>

template <typename LHS, typename RHS>
int compare(const LHS& lhs, const RHS& rhs) {
    if (lhs < rhs) return -1;
    else if (rhs < lhs) return 1;
    else return 0;
}

int main() {
    if (compare(1, 2) != -1) return 1;
    if (compare(2, 1) != 1) return 1;
    if (compare(2, 2) != 0) return 1;
    std::cout << "cout" << std::endl;
    std::cerr << "cerr" << std::endl;
    return 0;
}
