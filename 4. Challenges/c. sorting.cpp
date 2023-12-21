#include <iostream>

using namespace std;

int insertionSort(int array[], int length) {
    for (int i = 0; i < length; i++) {
        int currentElement = array[i];
        int previousElementIndex = i - 1;

        while (previousElementIndex >= 0 && currentElement < array[previousElementIndex]) {
            array[previousElementIndex + 1] = array[previousElementIndex];
            previousElementIndex = previousElementIndex - 1;
        }
        
        array[previousElementIndex + 1] = currentElement;
    }
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, length);

    insertionSort(arr, length);

    cout << "Sorted array: ";
    printArray(arr, length);

    return 0;
}
