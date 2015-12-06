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

void swap(int &a,int &b) {
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
void removeOdd(int A[], int &sizeA) {
    /*
     * removeOdd
     * @A - Int Array to be searched
     * @&sizeA - Referece to sizeA - size of A array
     * sorting all even number at begin of array
     * setting new size to sizeA
     */
    int odd;
    for (int i = 0; i < sizeA - 1; i++) {
        if (A[i] % 2 == 1) {
            for (int y = i + 1; y < sizeA; y++) {
                if (A[y] % 2 == 0) {
                    swap(A[i],A[y]);
                    odd++;
                    break;
                }
            }
        } else {
            odd++;
        }
    }
    sizeA = odd;
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

    removeOdd(arr, arrSize);

    cout << "Removed Odd Array" << endl;
    printArr(arr, arrSize);

    cout << "new arrSize " << arrSize << endl;

    return 0;
}
