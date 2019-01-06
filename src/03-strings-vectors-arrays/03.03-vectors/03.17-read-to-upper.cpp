#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string tmp;
    std::vector<std::string> words;
    while (std::cin >> tmp) {
        words.push_back(tmp);
    }
    
    for (auto& word : words) {
        for (auto& ch : word) {
            ch = std::toupper(ch);
        }
    }

    unsigned int counter = 0;
    for (auto& word : words) {
        std::cout << (counter == 0 ? "" : " ") << word;
        if (counter++ == 7) {
            counter = 0;
            std::cout << "\n";
        }
    }

    if (counter != 0) {
        std::cout << "\n";
    }
}

