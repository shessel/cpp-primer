#include <iostream>
#include <vector>

int main() {
    std::vector<int> grades;
    int tmp;
    while (std::cin >> tmp) {
        grades.push_back(tmp);
    }

    std::vector<int> clusters(11, 0);

    for (auto grade : grades) {
        if (grade < 0 || grade > 100) {
            continue;
        }

        auto cluster_it = clusters.begin() + (grade / 10);
        *cluster_it += 1;
    }

    bool first = true;
    for (auto val : clusters) {
        std::cout << (first ? "" : ", ") << val;
        first = false;
    }
    std::cout << "\n";

    return 0;
}
