#include <iostream>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *startElement = arr;
    int middleElement = 0;

    if (size % 2 == 0) {
        middleElement = *(startElement + (size / 2) - 1);
    } else {
        middleElement = *(startElement + (size - 1) / 2 - 1);
    }

    cout << middleElement;

    return 0;
}
