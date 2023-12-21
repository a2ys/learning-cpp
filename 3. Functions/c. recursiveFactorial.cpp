#include <iostream>

using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    int factorialOfNumber = factorial(number);
    cout << endl << "Factorial of the number " << number << "is: " << factorialOfNumber;

    return 0;
}
