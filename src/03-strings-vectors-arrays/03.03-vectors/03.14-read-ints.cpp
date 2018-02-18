#include <iostream>
#include <vector>

int main(){
    std::vector<int> ivec;
    int tmp;
    while (std::cin >> tmp) {
        ivec.push_back(tmp);
    }

    for(auto& val : ivec) {
        std::cout << val << std::endl;
    }

    return 0;
}
