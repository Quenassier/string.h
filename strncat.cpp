#include <iostream>
void myStrncat(char* destination, const char* source, size_t num) {

    while (*destination) {
        destination++;
    }
        while (*source && num--) {
        *destination++ = *source++;
    }

    *destination = '\0';
}

int main() {
    char destination[100] = "Hello, ";
    const char* source = "world!";
    size_t num = 5;
    
    myStrncat(destination, source, num);
    
    std::cout << destination << std::endl;
    return 0;
}
