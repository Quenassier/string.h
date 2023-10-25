include <iostream>

char* my_strncpy(char* dest, const char* src, size_t n) {
    char* originalDest = dest; 

    while (*src != '\0' && n > 0) {
        *dest = *src;
        src++;
        dest++;
        n--;
    }

    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return originalDest;
}
