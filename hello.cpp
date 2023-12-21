#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int fibonacciSequence[n];

    fibonacciSequence[0] = 0;
    fibonacciSequence[1] = 1;

    for (int i = 2; i < n; ++i) {
        fibonacciSequence[i] = fibonacciSequence[i - 1] + fibonacciSequence[i - 2];
    }

    cout << "Fibonacci sequence up to " << n << " terms" << endl;

    for (int i = 0; i < n; i++) {
        cout << fibonacciSequence[i] << " ";
    }

    return 0;
}
