/*
 * Yuri Ritvin
 * Question 12 section A Page 48
 */

#include <iostream>


using namespace std;
const int MAX_ARR_LEN = 100;

bool haveSameElems(int Arr1[], int Arr2[], int size) {
    /*
     * @Arr1[] - Array of int
     * @Arr2[] - Array of int
     * @size - size of both arrays
     */
    if (size == 0)
        return true;

    for (int i = 0; i < size; i++) {
        if (Arr1[i] == Arr2[size - 1]) {
            int temp = Arr1[i];
            Arr1[i] = Arr1[size - 1];
            Arr1[size - 1] = temp;
            return haveSameElems(Arr1, Arr2, size - 1);
        }
    }
    return false;

}

void swap(int *a, int *b) {
    /*
     * swap - making an swape
     * @*a - pointer to a
     * @*b - pointer to b
     * helper function
     */
    int temp = *a;
    *a = *b;
    *b = temp;
}

void getArr(int *arr, int size) {
    /*
     * getArr
     * @arr[] - to be filled
     * Complexity of this section is log(n), i used an binary search to find the element
     */
    cout << "enter number " << size << " number to array " << endl;
    for (int y = 0; y < size; y++) {
        cin >> arr[y];
    }

}

void printBoolRes(bool flag) { // This function prints true or false accoring to the value of flag

    if (flag)
        cout << "true ";
    else
        cout << "false ";
}

int main() {
    int left, right, min, max, size;
    int *arr = new int[MAX_ARR_LEN];
    int *arr2 = new int[MAX_ARR_LEN];

    cout << "Enter Array size" << endl;
    cin >> size;


    getArr(arr, size);
    getArr(arr2, size);

    printBoolRes(haveSameElems(arr, arr2, size));
    return 0;
}
