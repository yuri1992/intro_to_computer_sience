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

int main() {
    int num;
    cout << "Enter Number" << endl;
    cin >> num;
    cout << countDividers(num) << " , " << sumDividers(num) << endl;
    return 0;
}
