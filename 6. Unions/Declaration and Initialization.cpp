#include <iostream>

using namespace std;

union Value
{
    int integer;
    double decimal;
    char character;
};

int main()
{
    // The use of unions is to save memory.
    // With Unions, different types of data can be stored at the same location.

    Value myValue;

    myValue.integer = 42;
    cout << "Name: " << myValue.integer << endl;

    myValue.decimal = 3.14;
    cout << "Decimal: " << myValue.decimal << endl;

    myValue.character = 'A';
    cout << "Character: " << myValue.character << endl;

    // The values are stored in the same memory location, so accessing one member will overwrite the others.
    // The following prints may not be meaningful as the union members share the same memory.

    cout << "After setting character, Name: " << myValue.integer << endl;
    cout << "After setting character, Decimal: " << myValue.decimal << endl;

    // Now the explanation for these absurd values as I understood them.
    // I may be wrong as I am learning C++ as well, so feel free to correct me!

    // Since all the values in a Union share the same memory location,
    // when you try to print say the integer value, C++ will try to interpret as an integer
    // whatever was last assigned in the memory location. If there's an integer, C++ will
    // have no problem doing that. But if there's a string, or a double, C++ will try
    // to interpret the string or the double value as an integer, and thus C++ will give
    // out absurd values, as C++ will give out whatever it interpreted out of the value.
    
    // From here it might get a bit complex, but try to understand it as it is a very
    // beautiful concept.

    // Now if there were a double value in the location, when we try to reinterpret cast
    // the integer value to treat the bit pattern back as the double value, it will give
    // out the double value from where it interpreted the integer value. The same will go
    // if we try to get the character interpretation of the double value, it will give out
    // whatever it interpreted as the character value for the given double value, specifically
    // what ASCII value corresponds to the integer value interpreted from the double value.

    // This part may require a bit of in-depth knowledge of pointers.

    // Now if there were an array of integers in the union as well (note the data type),
    // and it was the last assigned value for the union variable, the values will give
    // you a clear view of what is happening in the memory. As you know in C++,
    // arrays get decayed as a pointer to it's first value, when we try to print the integer,
    // it will print whatever it interpreted from the value stored at the pointer, and since the
    // pointer is the first value of the * integer * array, it will print the first value of the array,
    // and the double and character follow as the interpretation of the first value as double value and
    // character value respectively. The double and character representation will not be meaningful
    // unless we specifically represent floating-point values or character values in the array.

    // If you get this concept, you'll get to know a lot about how C++ handles memory,
    // and how beautiful it is to get to know about the computer memory at a low-level.

    return 0;
}
