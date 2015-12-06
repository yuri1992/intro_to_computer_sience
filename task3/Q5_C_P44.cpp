/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;
const int SIZE = 100;

void printArr(double arr[][SIZE], int num_rows, int num_cols) {
    for (int i = 0; i < num_rows; i++) {
        for (int y = 0; y < num_cols; y++) {
            cout << " " << arr[i][y];
        }
        cout << endl;
    }
}

void getArr(double arr[][SIZE], int num_rows, int num_cols) {
    /*
     * getArr
     * @arr[][SIZE] - to be filled
     * num_rows - number of rows
     * num_cols - number of cols
     * populating the arr, getting an input form user till ARR_SIZE is filled
     */
    cout << "enter number " << num_cols*num_rows <<" to array " << endl;
    for (int i = 0; i < num_rows; i++) {
        for (int y = 0; y < num_cols; y++) {
            cin >> arr[i][y];
        }
    }
}

int positive(double A[][SIZE] ,int num_rows, int num_cols) {
    int sum=0;
    for (int i = 0; i < num_rows; i++) {
        for (int y = 0; y < num_cols; y++) {
            if (A[i][y] > 0)
                sum++;
        }
    }
    return sum;
}

int main() {
    int arrSizeRows,arrSizeCols;
    cout << "Please Enter the Row Array Size" << endl;
    cin >> arrSizeRows;
    cout << "Please Enter the Cols Array Size" << endl;
    cin >> arrSizeCols;

    double arr[SIZE][SIZE];

    // Get an ARR_SIZE array
    getArr(arr, arrSizeRows, arrSizeCols);

    cout << "Matrix" << endl;
    printArr(arr, arrSizeRows, arrSizeCols);

    cout << "Number of positive Numbers in array is  " << positive(arr, arrSizeRows, arrSizeCols) << endl;
    return 0;
}
