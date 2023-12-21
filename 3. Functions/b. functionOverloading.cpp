#include <iostream>

using namespace std;

void overloadedFunction() {
    cout << "Function called without overloading.";
}

void overloadedFunction(int value) {
    cout << "Function called with overloading with value " << value;
}

int main()
{
    overloadedFunction();
    overloadedFunction(1);

    return 0;
}
