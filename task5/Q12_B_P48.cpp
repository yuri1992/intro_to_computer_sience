/*
 * Yuri Ritvin
 * Question 12 section A Page 48
 */

#include <iostream>


using namespace std;
const int MAX_ARR_LEN = 100;

bool checkDecSeq(int A[], int left, int right) {
    /*
     * @A[] - Array of int
     * @left - the most left position to start search from
     * @right - the right most position to end search in him
     */
    if (left == right)
        return true;

    if (A[left+1] < A[left])
        return checkDecSeq(A,left+1,right);

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

int readArray(int data[]) {
    /*
     * readArray
     * @data[] - empty array to be filled
     * return the size of number been entered to array, array been filled with pointers
     */
    int i, l = 0;
    cin >> i;
    while (i != -1 && l < MAX_ARR_LEN) {
        data[l++] = i;
        cin >> i;
    }
    return l;
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

    cout << "Enter Array of Ints(max array size = 100) enter -1 to end input" << endl;
    size = readArray(arr);

    cout << "Enter Left and right to be searched" << endl;

    cin >> left;
    cin >> right;

    printBoolRes(checkDecSeq(arr, left, right));
    return 0;
}
