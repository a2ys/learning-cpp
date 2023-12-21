#include <iostream>

using namespace std;

double calculateSum(int array[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    double sum = calculateSum(arr, length);

    return 0;
}
