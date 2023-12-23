#include <iostream>

using namespace std;

int lengthOfString(const char *string) {
    const char *ptr = string;

    while (*ptr != '\0') // \0 is the escape sequence for the null character
    {
        ptr++;
    }
    
    int length = ptr - string;
}

int main() {
    const char *string = "Hello"; // Since "Hello" is constant, C++ expects us to assign it to a const char* instead of a non-constant char*.
    cout << "Length of the string " << string << " is " << lengthOfString(string);

    return 0;
}
