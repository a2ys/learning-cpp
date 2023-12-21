#include <iostream>
#include <climits>

using namespace std;

int main() {
    int matrix[3][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}};
    
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    
    int maximumValue = INT_MIN;
    bool found = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] > maximumValue) {
                maximumValue = matrix[i][j];
                found = true;
            }
        }
    }

    if (found) {
        cout << "The maximum value in the matrix is " << maximumValue;
    } else {
        cout << "There was no maximum value in the matrix.";
    }

    return 0;
}
