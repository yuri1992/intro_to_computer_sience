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

    int prefectNum = 0, friendlyCuples = 0;
    int dividerSum;
    for (int i = 2;i < num; i++) {
        dividerSum = sumDividers(i);

        if (dividerSum == i)
            prefectNum++;

        if (dividerSum < num and sumDividers(dividerSum) == i) {
            friendlyCuples++;
            //cout << "(" << i << " , " << dividerSum << ")" <<endl;
        }
    }
    cout << "Number Of Prefect Numbers " << prefectNum << endl;
    cout << "Number Of Friednly Couples " << friendlyCuples << endl;

    return 0;
}
