#include <cstring>
#include <iostream>

int main() {
    const char s1[] = "Hello ";
    const char s2[] = "World!";

    size_t cat_len = strlen(s1) + strlen(s2) + 1;
    char* s3 = new char[cat_len];
    strcpy(s3, s1);
    strcat(s3, s2);

    std::cout << s3 << "\n";

    delete[] s3;
    return 0;
}
