#include <cstddef>

template <typename ValueType, std::size_t N>
int constexpr arraySize(ValueType (&)[N]) noexcept {
    return N;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    bool boolArray[] = {true, false, true, false};

    static_assert(arraySize(intArray) == 5);
    static_assert(arraySize(boolArray) == 4);

    return 0;
}
