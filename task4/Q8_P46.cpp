#include <iostream>

using namespace std;
const int SIZE = 20;

void printArr(int arr[], const int arrSize) {
    /*
     * Priting array arr[]
     */
    for (int y = 0; y < arrSize; y++) {
        cout << arr[y] << " ";
    }
    cout << endl;
}

void getArr(int arr[], const int arrSize) {
    /*
     * getArr
     * @arr[] - to be filled
     */
    cout << "enter number 20 number to array " << endl;
    for (int y = 0; y < arrSize; y++) {
        cin >> arr[y] ;
    }

}

void sortAlgo(int stu[], const int  arrSize) {
    /*
     * Implementation of Sort Insertion
     * @stu - array of int
     * @arrSize - the current size of array
     */
    int j = 0;
    for(int i=0; i < arrSize;i++) {
        j = i;
        while (j > 0 && stu[j] < stu[j-1]) {
            int temp = stu[j];
            stu[j] = stu[j-1];
            stu[j-1] = temp;
            j--;
        }
        //printArr(stu,arrSize);
    }
}

int main() {
    /*
     * Page 46 Question 8 - Implement Insertion Algorithm
     * insertion Sort
     * The Best case of Complexity of O(n), if all the numbers are already sorted or need to be moved one place.
     * The Worst case if Complexity of O(n^2), if we need to move every number N times
     */
    int stu[SIZE];
    getArr(stu,SIZE);
    sortAlgo(stu,SIZE);
    printArr(stu,SIZE);
    return 0;
}