#include <iostream>
#include <vector>

void printSumOfAdjacentPairs(std::vector<int>& numbers) {
    bool first = true;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        std::cout << (first ? "" : " ") << numbers[i] + numbers[i+1];
        first = false;
    }
    std::cout << "\n";
}

void printSumOfOppositePairs(std::vector<int>& numbers) {
    bool first = true;
    for (size_t i = 0, j = numbers.size() - 1; i <= j; ++i, --j) {
        std::cout << (first ? "" : " ") << numbers[i] + numbers[j];
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
