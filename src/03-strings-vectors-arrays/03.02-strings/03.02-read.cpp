#include <iostream>
#include <string>

void readWordwise() {
    using namespace std;
    string tmp;
    while(cin >> tmp) {
        cout << (tmp == "") << endl;
    }
    cin.clear(); // clear eof flag
}

void readLinewise() {
    using namespace std;
    string tmp;
    while(getline(cin, tmp)) {
        cout << tmp << endl;
    }
    cin.clear(); // clear eof flag
}

int main() {
    readWordwise();
    readLinewise();
    
    return 0;
}
