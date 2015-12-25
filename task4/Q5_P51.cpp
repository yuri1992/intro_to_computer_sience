/*
 * Yuri Ritvin
 * Question 5 Page 51 15.12
 * get grades, and allocate dynamic memory
 */

#include <iostream>
#include <string.h>

using namespace std;

int length(char *s) {
    int i = 0;
    while (s[i++]);
    return i;
}

void copyArr(int *dest, int *source, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = source[i];
    }
}

int *getStudents(int &size, int &actualSize) {
    /*
     * getStudents
     * @&size - reference for int, keep the array maximum size
     * @&actualSize - reference for int keeping the actual elements sizes
     */
    size = 2;
    int grade;
    int *out = new int[size];
    actualSize = 0;
    cout << "Plase enter student grade, press -1 to end" << endl;
    cin >> grade;
    while (grade != -1) {
        if (size == actualSize) {
            size *= 2;
            int *temp = new int[size];
            copyArr(temp, out, actualSize);
            int *out = temp;
            delete temp;
        }
        out[actualSize++] = grade;
        cout << "Plase enter student grade, press -1 to end" << endl;
        cin >> grade;
    }

    return out;
}


void printArr(int arr[], const int arrSize) {
    /*
     * Priting array arr[]
     */
    for (int y = 0; y < arrSize; y++) {
        cout << arr[y] << " ";
    }
    cout << endl;
}


int main() {
    /*
     * complexity of this is O(n^2), because it will iterate over all array when it need to be copied
     */
    int actualSize, arrSize;
    int *out = getStudents(actualSize, arrSize);
    printArr(out, arrSize);
    cout << "array size " << arrSize << endl;
    cout << "array filled elments " << actualSize << endl;
    return 0;
}