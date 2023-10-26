#include <iostream>

const char* my_strstr(const char* haystack, const char* needle) {
    if (!haystack || !needle) }

    for (int i = 0; haystack[i] != '\0'; i++) {
        int j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j]) {
            j++;
        }

        if (needle[j] == '\0') {
            return &haystack[i];
        }
    

}

int main() {
    const char* haystack = "This is a sample text.";
    const char* needle = "sample";

    const char* result = my_strstr(haystack, needle);

    if (result) {
        std::cout << "Substring found at index: " << (result - haystack) << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}
