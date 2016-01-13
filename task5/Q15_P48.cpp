/*
 * Yuri Ritvin
 * Question 15 Page 48
 */

#include <iostream>


using namespace std;
const int MAX_ARR_LEN = 100;


bool subsetSum(int *numbers, int size, int sum) {
    if (size == 0)
        return false;

    if (sum == numbers[size - 1])
        return true;

    return subsetSum(numbers, size - 1, sum) or subsetSum(numbers, size - 1, sum - numbers[size - 1]);
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
    int num, size;
    int *arr = new int[MAX_ARR_LEN];

    cout << "Enter Array size" << endl;
    cin >> size;
    getArr(arr, size);
    cout << "enter Sum" << endl;
    cin >> num;

    printBoolRes(subsetSum(arr, size, num));
    return 0;
}
