/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;

const int ARR_SIZE = 12;

int min(int arr[]) {
    int min = arr[0];
    for (int i=1; i < ARR_SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void getArr(int arr[]) {
    for (int i=1; i < ARR_SIZE; i++) {
        cout << "enter number" << endl;
        cin >> arr[i];
    }
}

int main() {
    int arr[ARR_SIZE];
    getArr(arr);
    cout << min(arr);

    return 0;
}