/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int* getArray(int size) {
    int arr[size];
    for (int i =0; i < size; i++) {
        cout << "enter number" << endl;
        cin >> arr[i];
    }
    return arr;
}
void printArray(int arr[], int size) {
    for (int i=0;i < size; i++) {
        cout << " " << arr[i];
    }
}
int* sortArrayOdds(int arr[], int size) {
    int max = size - 1;
    int y;
    for (int i=0; i < size; i++) {
        if (arr[i] % 2 == 0)
            continue;
        else {
            for (y = max;y > i;y--) {
                if (arr[y] % 2 == 0) {
                    int temp = arr[y];
                    arr[y] = arr[i];
                    arr[i] = arr[y];
                    //swap(arr[y], arr[i]);
                    max--;
                }
            }
        }
    }
    return arr;
}

void swap(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    int arrayLength;
    cin >> arrayLength;
    int *arr;
    arr = getArray(arrayLength);
    arr = sortArrayOdds(arr,arrayLength);
    printArray(arr,arrayLength);

}