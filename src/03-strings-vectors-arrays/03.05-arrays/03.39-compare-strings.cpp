#include <cstring>

#include <iostream>
#include <string>

void compare_c_style(const char* const s1, const char* const s2) {
    int cmp = strcmp(s1, s2);
    std::cout << s1 << " " << " is";
    if (cmp < 0) {
        std::cout << " < ";
    } else if (cmp > 0) {
        std::cout << " > ";
    } else {
        std::cout << " == ";
    }
    std::cout << s2 << "\n";
}

void compare(const std::string& s1, const std::string& s2) {
    int cmp = s1.compare(s2);
    std::cout << s1 << " " << " is";
    if (cmp < 0) {
        std::cout << " < ";
    } else if (cmp > 0) {
        std::cout << " > ";
    } else {
        std::cout << " == ";
    }
    std::cout << s2 << "\n";
}

int main() {
    compare_c_style("a", "aa");
    compare_c_style("ab", "aa");
    compare_c_style("b", "aa");
    compare_c_style("A", "a");
    compare_c_style("B", "B");
    compare(std::string("a"), std::string("aa"));
    compare(std::string("ab"), std::string("aa"));
    compare(std::string("b"), std::string("aa"));
    compare(std::string("A"), std::string("a"));
    compare(std::string("B"), std::string("B"));

    return 0;
}
