/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;

int countDigit(int num) {
    /*
     * getDigitByIndex
     * @num - to be searched in
     * @index - index to retrive
     */
    int tempIndex = 0;
    while (num > 0) {
        tempIndex++;
        num = num / 10;
    }
    return tempIndex;
}

int getDigitByIndex(int num, int index) {
    /*
     * getDigitByIndex
     * @num - to be searched in
     * @index - index to retrive
     */
    int tempIndex = 1;
    index = countDigit(num) - index;
    while (num > 0) {
        if (tempIndex == index) {
            return num % 10;
        }
        tempIndex++;
        num = num / 10;
    }
    // on error
    return -1;
}

int buildNumber(int num, int indices) {
    int index, newNum = 0;
    int multi = 1;
    while(indices > 0) {
        index = indices % 10;
        newNum += getDigitByIndex(num, index) * multi;
        multi = multi *  10;
        indices = indices / 10;
    }
    return newNum;
}

int main() {
    int digits, num;
    cout << buildNumber(4735, 2010) << endl;
    cout << buildNumber(3028, 2010) << endl;
    return 0;
}