#include <string>

std::string& replaceCharsByXRangeFor(std::string &str) {
    for (auto &c : str) {
        c = 'X';
    }
    return str;
}

std::string& replaceCharsByXFor(std::string &str) {
    for (decltype(str.size()) i = 0; i < str.size(); ++i) {
        str[i] = 'X';
    }
    return str;
}

std::string& replaceCharsByXWhile(std::string &str) {
    decltype(str.size()) i = 0;
    while (i < str.size()) {
        str[i++] = 'X';
    }
    return str;
}

template<typename Func>
int test(Func f) {
    using namespace std;

    string test1 = "";
    if (f(test1) != "") return 1;

    string test2 = "abc";
    if (f(test2) != "XXX") return 1;

    string test3;
    if (f(test3) != "") return 1;

    const unsigned length = 9999ULL;
    string test4(length, 'X');
    string expected(length, 'X');
    if (f(test4) != expected) return 1;

    return 0;
}

int main() {
    if (test(replaceCharsByXRangeFor)) return 1;
    if (test(replaceCharsByXFor)) return 1;
    if (test(replaceCharsByXWhile)) return 1;

    return 0;
}
