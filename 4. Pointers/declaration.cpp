#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int *ptr = &num;

    *ptr = 42;

    cout << num;

    return 0;
}
