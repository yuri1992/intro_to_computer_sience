//
// Created by yuri on 12/4/15.
//
/*
 * Author : Yuri Ritvin
 */
#include <iostream>
#include <math.h>

using namespace std;

int countDividers(int num) {
    int counter = 1;
    for (int y = 2; y <= num / 2; y++) {
        if (num % y == 0) {
            counter ++;
        }
    }
    return counter;
}

int sumDividers(int num) {
    int tempSum = 1,y;
    for (y = 2; y <= num / 2; y++) {
        if (num % y == 0) {
            tempSum += y;
        }
    }
    return tempSum;
}

bool isPerefectNum(int num) {
    return num == sumDividers(num);
}

int main() {
    int num;
    cout << "Enter Number" << endl;
    cin >> num;
    if (isPerefectNum(num))
        cout << "The number " << num << " Is prefect " << endl;
    else
        cout << "The number " << num << " NOT Is prefect " << endl;
    return 0;
}
