#include <iostream>
#include <string>

void compareStrings(const std::string &string1, const std::string &string2) {
    using namespace std;
    if (string1 == string2) {
        cout << "strings are equal" << endl;
    } else if (string1 > string2) {
        cout << string1 << " is larger than " << string2 << endl;
    } else {
        cout << string2 << " is larger than " << string1 << endl;
    }
}

void compareStringLengths(const std::string &string1, const std::string &string2) {
    using namespace std;
    if (string1.size() == string2.size()) {
        cout << "strings have equal length" << endl;
    } else if (string1.size() > string2.size()) {
        cout << string1 << " is longer than " << string2 << endl;
    } else {
        cout << string2 << " is longer than " << string1 << endl;
    }
}

int main() {
    using namespace std;

    string string1, string2;
    cin >> string1 >> string2;
    compareStrings(string1, string2);
    compareStringLengths(string1, string2);

    return 0;
}
