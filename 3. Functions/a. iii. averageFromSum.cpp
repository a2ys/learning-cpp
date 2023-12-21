#include <iostream>

using namespace std;

double calculateSum(int array[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }

    return sum;
}

double calculateAverage(int array[], int size) {
    int sum = calculateSum(array, size);

    return (double) sum / size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    double average = calculateAverage(arr, length);

    return 0;
}
