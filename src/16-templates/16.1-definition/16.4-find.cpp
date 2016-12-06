#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
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

template <typename Container>
bool findResultsMatch(const Container& container, const typename Container::value_type& value) {
    return std::find(begin(container), end(container), value) == my_find(begin(container), end(container), value);
}

int main() {
    std::vector<int> intVector = {1, 2, 3, 4, 5, 6};
    if (!findResultsMatch(intVector, 4)) return 1;
    if (!findResultsMatch(intVector, 0)) return 1;

    std::list<std::string> stringList = {"foo", "bar", "baz"};
    if (!findResultsMatch(stringList, "foo")) return 1;
    if (!findResultsMatch(stringList, "fnord")) return 1;

    return 0;
}
