#include <iostream>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *startPointer = arr;
    int *endPointer = startPointer + size - 1;

    for (int i = 0; i < size; i++) {
        cout << *(endPointer - i) << " ";
    }

    return 0;
}
