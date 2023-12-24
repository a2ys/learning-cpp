#include <iostream>

using namespace std;

union Value
{
    int integer;
    double decimal;
    char character;
    int arr[3];
};

int main()
{
    Value myValue;

    myValue.integer = 42;
    cout << "Integer: " << myValue.integer << endl;

    myValue.decimal = 3.14;
    cout << "Decimal: " << myValue.decimal << endl;

    myValue.character = 'A';
    cout << "Character: " << myValue.character << endl;

    myValue.arr[0] = 10;
    myValue.arr[1] = 20;
    myValue.arr[2] = 30;

    // This is the for-each loop in C++.

    for (int i : myValue.arr) {
        cout << i << endl;
    }

    // You can easily guess that the value interpreted in myValue.integer will be
    // 10 (first value in the array).

    cout << "Integer: " << myValue.integer << endl;

    // Rest values will be the interpretation of 10 (the first value) in different data types.

    cout << "Decimal: " << myValue.decimal << endl;

    // An integer value cannot be interpreted as a character value, thus you'll most probably see an empty character here.
    
    cout << "Character: " << myValue.character;

    // The specific values you see may depend on factors like the compiler, compiler settings,
    // operating system, and the state of the memory at the time the program is executed.
    // Different compilers or platforms might choose different default values or leave the
    // memory in a different state. These values may not be consistent and highly unpredictable
    // in different machines. So, relying on these unpredictable values is often unsafe and
    // always discouraged.

    return 0;
}
