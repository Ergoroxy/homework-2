#include <iostream>

using namespace std;


int multiply(int x, int y) {
    if (y == 0) {
        return 0;
    } else if (y > 0) {
        return x + multiply(x, y - 1); 
    } else {
        return -multiply(x, -y); // Handle negative y
    }
}
int sumDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumDigits(n / 10);
    }
}
void decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        return;
    } else {
        decimalToBinary(decimalNumber / 2);
        cout << (decimalNumber % 2);
    }

int main() {
    cout <<"Problem 1\n";
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    int result = multiply(x, y);
    cout << "Result: " << result << endl;
    cout <<"Problem 2\n";
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits: " << sumDigits(n) << endl;
    cout << "Problem 3\n";
    int inputDecimal;
    cout << "Enter a decimal number: ";
    cin >> inputDecimal;

    cout << "Binary representation: ";
    decimalToBinary(inputDecimal);
    cout << endl;
    cout << "Problem 4\n";
    int numRows, numCols;
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numCols;

    int matrix[numRows][numCols];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Row-wise sum:\n";
    for (int i = 0; i < numRows; i++) {
        int rowSum = 0;
        for (int j = 0; j < numCols; j++) {
            rowSum += matrix[i][j];
        }
        cout << rowSum << endl;
    cout <<"Problem 5\n";
          int numRows, numCols;
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numCols;

    int arrayA[numRows][numCols], arrayB[numRows][numCols];
    cout << "Enter the elements of matrix A:\n";
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cin >> arrayA[i][j];
        }
    }
    cout << "Enter the elements of matrix B:\n";
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cin >> arrayB[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << arrayA[i][j] + arrayB[i][j] << " ";
        }
        cout << endl;
    }

    



    return 0;
}
