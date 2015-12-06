/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;

const int ARR_SIZE = 12;

int min(int arr[]) {
    int min = arr[0];
    for (int i = 1; i < ARR_SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void printEqualIndexes(int arr[],int num) {
    for (int i = 1; i < ARR_SIZE; i++) {
        if (arr[i] == num) {
            cout << " " << i;
        }
    }
}

void getArr(int arr[]) {
    /*
     * getArr
     * @arr[] - to be filled
     * populating the arr, getting an input form user till ARR_SIZE is filled
     */
    for (int i = 0; i < ARR_SIZE; i++) {
        cout << "enter number "  << endl;
        cin >> arr[i];
    }
}

int main() {
    int arr[ARR_SIZE];
    // Get an ARR_SIZE array
    getArr(arr);
    // printing all equal places
    printEqualIndexes(arr, min(arr));
    return 0;
}