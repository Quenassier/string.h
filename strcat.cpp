#include <iostream>

char* strcat(char* dest, const char* src);

int main() {
    char str1[100] = "Hello";
    const char* str2 = "World!";

    strcat(str1, str2);

    std::cout << str1 << std::endl;
    return 0;
}
