#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
