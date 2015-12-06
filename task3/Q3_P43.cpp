/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;

const int ARR_SIZE = 50;

int getStartDescendArr(int arr[]) {
    /*
     * getStartDescedArr
     * @arr - to Be Searched in
     * @return - return the first index of the biggest descend serial
     */
    int descendIndexMax=0,descendLengthMax=1,descendIndex=0,descendLength=0;
    for (int i = 1; i < ARR_SIZE; i++) {
        if (arr[i] >= arr[i-1]) {
            if (descendLength > descendLengthMax) {
                descendIndexMax = descendIndex;
                descendLengthMax = descendLength;
            }
            descendLength = 0;
            descendIndex = i;
        } else {
            descendLength++;
        }
    }
    return descendIndexMax;
}

void getArr(int arr[]) {
    /*
     * getArr
     * @arr[] - to be filled
     * populating the arr, getting an input form user till -1 is entered
     */
    int input,in=0;
    cout << "Please Enters numbers to fill the array (break on -1)" << endl;
    cin >> input;
    while (input != -1) {
        arr[in] = input;
        in++;
        cin >> input;
    }
}

int main() {
    int arr[ARR_SIZE];
    // Get an ARR_SIZE array
    getArr(arr);
    // Printing the Biggest Descend Array
    cout << "The Biggest Desced Array Start in Index ";
    cout << getStartDescendArr(arr);
    return 0;
}