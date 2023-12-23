#include <iostream>

using namespace std;

void swapPointers(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 3;
    int b = 4;

    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << *ptr1 << " " << *ptr2 << endl;

    swapPointers(ptr1, ptr2);

    cout << *ptr1 << " " << *ptr2;

    return 0;
}
