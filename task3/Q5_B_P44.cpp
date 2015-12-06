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

void MeanDiagonal(double A[][SIZE],int dim, double& diag1, double& diag2) {
    /*
     * MeanDiagonal - Calculating The average of Diagonal Lines in the matrix
     * @A - two Dimensional Array
     * @dim - Array Size (Square Array)
     * @diag1 - pointer to Diag1, Main Diagonal Average Will be assign to
     * @diag2 - pointer to Diag2, Secondary Diagonal Average Will be assign to
     */
    int i;
    for(i= 0;i<dim;i++){
        diag1 += A[i][i];
    }
    diag1 = diag1 / dim;

    int y = 0;
    for(i = dim - 1;i >= 0;i--){
        diag2 += A[i][y++];

    }
    diag2 = diag2 / dim;
}



int main() {
    int dim;
    cout << "Please Enter  Array Size" << endl;
    cin >> dim;

    double arr[SIZE][SIZE];

    // Get an ARR_SIZE array
    getArr(arr, dim, dim);

    cout << "Matrix" << endl;
    printArr(arr, dim, dim);

    double diag1,diag2;
    MeanDiagonal(arr, dim, diag1, diag2);

    cout << "Main slant average " << diag1 << endl;
    cout << "Secondary slant average " << diag2 << endl;

    return 0;
}
