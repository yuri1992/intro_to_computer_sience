/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;



int getPositiveCount(int arr[],int const arrSize) {
    int sum = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            sum++;
        }
    }
    return sum;
}

void printPositiveCount(int arr[],int const arrSize) {
    cout << "Number of Positive number in the array is -  " << getPositiveCount(arr, arrSize);
}

void getArr(int arr[], int const arrSize) {
    /*
     * getArr
     * @arr[] - to be filled
     * @arr_size -  array size
     * populating the arr, getting an input form user till ARR_SIZE is filled
     */
    for (int i = 0; i < arrSize; i++) {
        cout << "enter number "  << endl;
        cin >> arr[i];
    }
}

int main() {
    int arrSize;
    cout << "Please Enter the Array Size" << endl;
    cin >> arrSize;
    int arr[arrSize];
    // Get an ARR_SIZE array
    getArr(arr,arrSize);
    // printing all equal places
    printPositiveCount(arr,arrSize);
    return 0;
}
