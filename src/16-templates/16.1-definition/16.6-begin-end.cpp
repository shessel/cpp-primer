#include <iostream>
#include <iterator>

template <typename ValueType, size_t N>
ValueType * const myBegin(ValueType (&array)[N]) {
    return &array[0];
}

template <typename ValueType, size_t N>
ValueType * const myEnd(ValueType (&array)[N]) {
    return &array[N];
}

int main() {
    int test[] = {1, 2, 3, 4, 5};

    for (auto it = std::begin(test), myIt = myBegin(test);
         it != std::end(test) && myIt != myEnd(test);
         it++, myIt++) {
        // std::begin and std::end for arrays return pointers as per
        // section 24.7 of the latest drafts for c++14 (N4296) and c++17 (N4606)
        // so direct comparison works
        if (it != myIt) return 1;
    }

    return 0;
}
