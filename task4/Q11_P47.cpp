/*
 * Yuri Ritvin
 * Question 11 Page 47 15.12
 * Two Dimensional array, finding sub array
 */

#include <iostream>

using namespace std;
const int N = 100;

int binarySearch(int arr[], int start, int end) {
    if (start == end or end - start == 1)
        return -1;

    if (arr[start] == 0 && arr[start+1] == 1)
        return start +1;

    int mid = (start + end) / 2;
    if (arr[mid - 1] == 0 && arr[mid] == 1)
        return mid;

    if (arr[mid] == 1 && arr[mid+1] == 1)
        return binarySearch(arr, 0,mid);
    else
        return binarySearch(arr, mid, end);
}

int firstOccur(int arr[], int col) {
    return binarySearch(arr, 0, col);
}

void getUpperLeft(int mat[][N], int n, int& row, int& col) {
    int i,y,x;
    y = firstOccur(mat[n - 1], n);
    for (i = 0;i < n; i++) {
        if (mat[i][n-1] == 1) {
            x = i;
            break;
        }
    }
    row = x;
    col = y;
}

void printArr(int arr[][N], int num_rows, int num_cols) {
    for (int i = 0; i < num_rows; i++) {
        for (int y = 0; y < num_cols; y++) {
            cout << arr[i][y] << " ";
        }
        cout << endl;
    }
}

void getArr(int arr[][N], int num_rows, int num_cols) {
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

int main (){
    int arrSizeRows,arrSizeCols;
    cout << "Please Enter the Rows Array Size" << endl;
    cin >> arrSizeRows;

    int arr[N][N];

    // Get an ARR_SIZE array
    getArr(arr, arrSizeRows, arrSizeRows);
    cout << "Matrix" << endl;
    printArr(arr, arrSizeRows, arrSizeRows);

    int row,col;
    getUpperLeft(arr, arrSizeRows, row, col);

    cout << "new row " << row << endl;
    cout << "new col " << col << endl;

    return 0;
}