#include <string>

std::string& replaceCharsByX(std::string &str) {
    for (auto &c : str) {
        c = 'X';
    }
    return str;
}

int main() {
    using namespace std;

    string test1 = "";
    if (replaceCharsByX(test1) != "") return 1;

    string test2 = "abc";
    if (replaceCharsByX(test2) != "XXX") return 1;

    string test3;
    if (replaceCharsByX(test3) != "") return 1;

    return 0;
}
