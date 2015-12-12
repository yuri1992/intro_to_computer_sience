
/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;
const int ARRAY_SIZE = 100;

int getPositiveCount(int arr[],int const arrSize) {
    int sum = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            sum++;
        }
    }
    return sum;
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
    int arr[ARRAY_SIZE];
    cout << "Please Enter the Array Size" << endl;
    cin >> arrSize;
    // Get an ARR_SIZE array
    getArr(arr,arrSize);
    // printing all equal places
    cout << "Number of Positive number in the array is -  " << getPositiveCount(arr,arrSize);
    return 0;
}


