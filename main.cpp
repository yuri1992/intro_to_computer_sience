//#include "task3/Q7_C_P36.cpp"
//#include "classTraining/digitChallenge.cpp"
#include <iostream>

using namespace std;
void printArray(int a[], int size) {

    int i;

    for (i = 0; i < size; ++i) {
        cout << " " << a[i];
    }
    cout << endl;
}

int main() {

    int a[3][4] = {{ 1, 2, 3 }, {4, 5, 6}, {7, 8, 9}};

    a[2][2] = 98;

    printArray(a[0],4);

    printArray(a[1],4);

    printArray(a[2],4);

    printArray(a[0],12);

    a[2][-1] = 88;

    printArray(a[0],4);

    printArray(a[1],4);

    printArray(a[2],4);
    return 0;
}