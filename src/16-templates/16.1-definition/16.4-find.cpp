#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

template <typename ValueType, typename Iterator>
Iterator my_find(Iterator begin, Iterator end, const ValueType& value) {
    while (begin != end) {
        if (*begin == value) {
            return begin;
        }
        ++begin;
    }
    return end;
}

template <typename ValueType>
bool findResultsMatch(const std::vector<ValueType>& vec, const ValueType& value) {
    return std::find(begin(vec), end(vec), value) == my_find(begin(vec), end(vec), value);
}

int main() {
    using std::vector;
    using std::begin;
    using std::end;

    vector<int> vec = {1, 2, 3, 4, 5, 6};
    if (!findResultsMatch(vec, 4)) return 1;
    if (!findResultsMatch(vec, 0)) return 1;
    return 0;
}
