#include <iostream>

using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    
    int number;
    cin >> number;

    if (isPrime(number)) {
        cout << "The number " << number << " is prime.";
    } else {
        cout << "The number " << number << " is not prime.";
    }

    return 0;
}
