/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;
const int ARRAY_SIZE = 100;

void printArr(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << " " << arr[i];
    }
    cout << "\n";
}

void getArr(int arr[], int const arrSize) {
    /*
     * getArr
     * @arr[] - to be filled
     * @arr_size -  array size
     * populating the arr, getting an input form user till ARR_SIZE is filled
     */
    for (int i = 0; i < arrSize; i++) {
        cout << "enter number " << endl;
        cin >> arr[i];
    }
}

void copyOdd(int A[], int sizeA, int B[], int &sizeB) {
    sizeB = 0;
    for (int i = 0; i < sizeA; i++) {
        if (A[i] % 2 == 1) {
            B[sizeB] = A[i];
            sizeB++;
        }
    }
}

int main() {
    int arrSize;
    int arr[ARRAY_SIZE];
    cout << "Please Enter the Array Size" << endl;
    cin >> arrSize;

    // Get an ARR_SIZE array
    getArr(arr, arrSize);

    int arrSizeB = arrSize;
    int arrOdd[arrSizeB];
    cout << arrSizeB << endl;
    copyOdd(arr, arrSize, arrOdd, arrSizeB);
    cout << arrSizeB << endl;
    cout << "Array" << endl;
    printArr(arr, arrSize);

    cout << "Odd Array" << endl;
    printArr(arrOdd, arrSizeB);

    return 0;
}
