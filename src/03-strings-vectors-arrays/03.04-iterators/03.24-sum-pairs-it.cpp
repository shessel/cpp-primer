#include <iostream>
#include <vector>

void printSumOfAdjacentPairs(std::vector<int>& numbers) {
    if (numbers.size() < 2) {
        return;
    }

    bool first = true;
    for (auto it = numbers.cbegin(); it != numbers.cend() - 1; ++it) {
        std::cout << (first ? "" : " ") << *it + *(it+1);
        first = false;
    }
    std::cout << "\n";
}

void printSumOfOppositePairs(std::vector<int>& numbers) {
    if (numbers.size() < 1) {
        return;
    }

    bool first = true;
    // <= works for iterators on std::vector
    for (auto begin = numbers.cbegin(), end = numbers.cend() - 1; begin <= end; ++begin, --end) {
        std::cout << (first ? "" : " ") << *begin + *end;
        first = false;
    }
    std::cout << "\n";
}

int main() {
    int tmp;
    std::vector<int> numbers;
    while (std::cin >> tmp) {
        numbers.push_back(tmp);
    }

    printSumOfAdjacentPairs(numbers);
    printSumOfOppositePairs(numbers);
}
