/*
 * Yuri Ritvin
 * Question 10 Page 47 15.12
 * increasing decreasing array
 */

#include <iostream>

using namespace std;

int findMaxBinary(int arr[],int start, int end) {
    /*
     * Implement an binary search for getting the maximum element in increasing array
     * spliting the array to two half, checking on which half we need to iterate again,
     * the second half will not be iterate
     */
    if (start == end)
        return arr[start];

    // Checking Condition
    if (start+1 == end) {
        if (arr[start + 1] < arr[start]) {
            // the right element is smaller then the left
            return arr[start];
        }
        if (arr[start] > arr[start + 1])
            return arr[start + 1];
    }
    // spliting each time the array to two
    int middle = (start + end) / 2;

    // maximum element will be greater then his both neigbers
    if (arr[middle] > arr[middle+1] && arr[middle] > arr[middle - 1])
        return arr[middle];

    if (arr[middle] > arr[middle + 1] && arr[middle] < arr[middle - 1])
        return findMaxBinary(arr, 0, middle);
    else
        return findMaxBinary(arr, middle, end);
}

int getMaxIncDecSeq(int arr[],int n) {
    /*
     * return the max elment, when the array is increasing and then decreasing
     */
    return findMaxBinary(arr,0,n);
}

int* getArr(int& size) {
    /*
     * getArr
     * @arr[] - to be filled
     * Complexity of this section is log(n), i used an binary search to find the element
     */
    int n;
    cout << "Please Array Size" << endl;
    cin >> n;
    int* arr = new int[n];
    cout << "enter number " << n << " number to array " << endl;
    for (int y = 0; y < n; y++) {
        cin >> arr[y] ;
    }
    size = n;
    return arr;
}


int main() {
    int size;
    int* arr = getArr(size);
    cout << getMaxIncDecSeq(arr, size);
    return 0;
}