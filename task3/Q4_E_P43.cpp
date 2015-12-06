/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;


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

void swap(int &a, int &b) {
    /*
     * Simple Swap Function
     * @&a pointer by reference to a
     * @&b pointer by reference to b
     * swaping a and b
     */
    int temp = a;
    a = b;
    b = temp;
}

void splitParity(int A[], int size) {
    /*
     * splitParity
     * @A - Int Array to be searched
     * @&size - size of A array
     * sorting all even number at begin of array
     */
    int lastIndex = size - 1;
    for (int i = 0; i < size - 1; i++) {
        if (A[i] % 2 == 1) {
            for (int y = lastIndex; y > 0; y--) {
                if (A[y] % 2 == 0) {
                    swap(A[i], A[y]);
                    lastIndex = y - 1;
                    break;
                }
            }
            if (lastIndex == i)
                break;
        }
    }
}

int main() {
    int arrSize;
    cout << "Please Enter the Array Size" << endl;
    cin >> arrSize;
    int arr[arrSize];

    // Get an ARR_SIZE array
    getArr(arr, arrSize);

    cout << "Array" << endl;
    printArr(arr, arrSize);

    splitParity(arr, arrSize);

    cout << "Sorted by Even Odd Array" << endl;
    printArr(arr, arrSize);


    return 0;
}
