/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;

const int NEGATIVE_INPUT_NUMBER = -1;
const int DIGIT_EQUAL = -2;


bool digitEqual(int num) {
    /*
     * digitNotEqual
     * @num - number to be checked if all his digit are diffrent
     * return true if digit are same
     */
    int digit, tempNum;
    while (num > 0) {
        digit = num % 10;
        tempNum = num / 10;
        while (tempNum > 0) {
            if (digit == (tempNum % 10))
                return true;
            tempNum = tempNum / 10;
        }
        num = num / 10;
    }
    return false;
}

int getDigitOccurs(int num, int digit) {
    /*
     * getDigitOccurs
     * @num - number to be search in
     * @digit - digit to find
     * @return - Number of Occurs
     */
    int sumDigitOccur = 0;
    while (num > 0) {
        if (num % 10 == digit)
            sumDigitOccur++;
        num = num / 10;
    }
    return sumDigitOccur;
}

int inputValidation(int num, int digits) {
    if (num <= 0 or digits <= 0) {
        return NEGATIVE_INPUT_NUMBER;
    } else if (digitEqual(digits)) {
        return DIGIT_EQUAL;
    }
    return 1;
}

int countDigitOccur(int num, int digits) {
    int currntDigit, sum = 0;
    while (digits > 0) {
        currntDigit = digits % 10;
        sum += getDigitOccurs(num, currntDigit);
        digits = digits / 10;
    }
    return sum;
}

int main() {
    int digits, num;
    cout << "Enter Number" << endl;
    cin >> num;
    cout << "Enter Digits" << endl;
    cin >> digits;

    int error = inputValidation(num, digits);

    if (error == NEGATIVE_INPUT_NUMBER) {
        cout << "Input Must be bigger then 0";
    } else if (error == DIGIT_EQUAL) {
        cout << "Digits in @digit Must to be diffrent";
    } else {
        cout << countDigitOccur(num, digits);
    }

    return 0;
}