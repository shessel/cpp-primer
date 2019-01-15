#include <cctype>
#include <iostream>
#include <string>

int main() {
    using namespace std;

    string input;
    string output;
    getline(cin, input);

    for (auto& c : input) {
        if (!ispunct(c)) {
            output += c;
        }
    }

    cout << output << endl;
    return 0;
}
