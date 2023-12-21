#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter the number you want to check for: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << endl << "The number " << number << " is even.";
    } else {
        cout << endl << "The number " << number << " is odd.";
    }

    return 0;
}
