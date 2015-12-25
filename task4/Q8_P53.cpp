/*
 * Yuri Ritvin
 * Question 8 Page 53 15.12
 * remove elments from array by indexes
 */
#include <iostream>

using namespace std;

int *notIn(int arr[], int aLen, int indices[], int indLen) {
    //TODO: complixtey is to high, should be log(n) or O(n)
    if (indLen == aLen)
        return NULL;
    bool isFound = false;
    int z = 0;
    int *n = new int[aLen - indLen];
    for (int i = 0; i < aLen; i++) {
        isFound = false;
        for (int y = 0; y < indLen; y++) {
            if (i == indices[y]) {
                isFound = true;
                break;
            }
        }
        if (!isFound)
            n[z++] = arr[i];

    }
    return n;
}

void printArr(int arr[],int arrSize) {
    /*
     * Printing array arr[]
     */
    for (int y = 0; y < arrSize; y++) {
        cout << arr[y] << " ";
    }
    cout << endl;
}

void getArr(int arr[], int arrSize) {
    /*
     * getArr
     * @arr[] - to be filled
     */
    cout << "enter number " << arrSize << " number to array " << endl;

    for (int y = 0; y < arrSize; y++) {
        cin >> arr[y];
    }
}

int main() {
    int aLen, indLen;

    cout << "Enter aLen \n";
    cin >> aLen;

    int *arr = new int[aLen];
    getArr(arr, aLen);


    cout << "Enter indLen \n";
    cin >> indLen;

    int *indices = new int[indLen];
    getArr(indices, indLen);


    int *n = notIn(arr, aLen, indices, indLen);
    printArr(n, aLen - indLen);
    return 0;
}