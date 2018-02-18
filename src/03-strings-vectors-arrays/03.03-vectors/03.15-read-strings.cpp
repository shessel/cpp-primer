#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> svec;
    std::string tmp;
    while (std::cin >> tmp) {
        svec.push_back(tmp);
    }

    for(auto& val : svec) {
        std::cout << val << std::endl;
    }

    return 0;
}
