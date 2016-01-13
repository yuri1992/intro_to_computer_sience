/*
 * Yuri Ritvin
 * Question 12 section A Page 48
 */

#include <iostream>


using namespace std;
const int MAX_ARR_LEN = 100;

int getMin(int a, int b) {
    return a < b ? a : b;
}

int getMax(int x, int y) {
    return x > y ? x : y;
}
void minMax(int a[], int left, int right, int &min, int &max) {
    int max1, max2, min1, min2, middle;
    if (left == right) {
        max = min = a[left];
    } else {
        mid = (right + left) / 2;

        minMax(a, left, mid, min1, max1);
        minMax(a, mid + 1, right, min2, max2);

        min = getMin(min1, min2);
        max = getMax(max1, max2);
    }
}
void swap(int *a, int *b) {
    /*
     * swap - making an swap
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

int main() {
    int left, right, min, max, size;
    int *arr = new int[MAX_ARR_LEN];

    cout << "Enter Array of Ints(max array size = 100) enter -1 to end input" << endl;
    size = readArray(arr);

    cout << "Enter Left and right to be searched" << endl;

    cin >> left;
    cin >> right;

    minMax(arr, left, right, min, max);

    cout << "max " << max << endl;
    cout << "min " << min << endl;
    return 0;
}
