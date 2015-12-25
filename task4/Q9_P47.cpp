/*
 * Yuri Ritvin
 * Question 9 Page 47 15.12
 * finding the first occur of event odd cupple in array
 */

#include <iostream>

using namespace std;

int searchBinary(int arr[], int start, int end) {
    /*
     * searchBinary - Implement Binary Search with recursive
     *                dividing the list for half each time.
     *                search left to right.
     * @arr - array of number
     * @start - start index for search
     * @end - last index for search
     */

    if (start == end || end - start == 1)
        return -1;

    int mid = (start + end) / 2;

    if (arr[mid] % 2 == 0 && arr[mid + 1] % 2 == 1) {
        return mid;
    }

    int left = searchBinary(arr, start, mid);

    if(left != -1)
        return left;

    return searchBinary(arr, mid, end);
}

int findChange(int arr[], int n) {
    return searchBinary(arr,0,n);
}


int* getArr(int& size) {
    /*
     * getArr
     * @arr[] - to be filled
     * @&size - reference to size
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
    cout << findChange(arr, size);
    return 0;
}