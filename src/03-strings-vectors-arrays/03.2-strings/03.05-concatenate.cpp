#include <iostream>
#include <string>

void concatenate() {
    using namespace std;

    string inputString;
    string outputString;

    while (cin >> inputString) {
        outputString += inputString;
    }

    cin.clear();
    cout << outputString << endl;
}

void concatenateWithSpace() {
    using namespace std;

    string inputString;
    string outputString;

    while (cin >> inputString) {
        if (!outputString.empty()) {
            outputString += " ";
        }
        outputString += inputString;
    }

    cin.clear();
    cout << outputString << endl;
}

int main() {
    concatenate();
    concatenateWithSpace();

    return 0;
}
