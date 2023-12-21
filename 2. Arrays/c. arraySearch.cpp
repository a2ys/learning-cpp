#include <iostream>

using namespace std;

int main() {
    int arr[] = {2, 7, 1, 5, 9, 12, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the value to search: ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Value found at index " << index << endl;
    } else {
        cout << "Value not found in the array" << endl;
    }

    return 0;
}