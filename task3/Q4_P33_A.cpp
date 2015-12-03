/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;
const int NEGATIVE_INPUT_NUMBER = -1;
const int ILLEGAL_DIGIT = -2;

int getDigitOccurs(int num, int digit) {
    /*
     * getDigitOccurs
     * @num - number to be search in
     * @digit - digit to find
     * @return - Number of Occurs
     */
    int sumDigitOccur = 0;
    while (num > 0) {
        if (num%10 == digit)
            sumDigitOccur++;
        num = num / 10;
    }
    return sumDigitOccur;
}

int validate(int num, int digit) {
    /*
     * validate
     * @num - num for validate
     * @digit - for validate
     *
     * validation
     *  num > 0 else return NEGATIVE_INPUT_NUMBER
     *  digit >= 0 and < 10 else return ILLEGAL_DIGIT
     *  @return 1 onSuccessful
     */
    if (num <= 0)
        return NEGATIVE_INPUT_NUMBER;
    if (digit > 10 or digit < 0)
        return ILLEGAL_DIGIT;
    return 1;
}


int main() {
    /*
     * Question Number 4 page 33
     * Args:
         * 	num - Integer
         * 	digit - digit >= 0
     */
    int num,digit;
    cout << "Enter Number for Number" << endl;
    cin >> num;
    cout << "Enter Digit to search" << endl;
    cin >> digit;
    int error = validate(num,digit);
    if (error == 1) // no Error, Validation Was Successful
        cout << "Digit " << digit << " Occurs " << getDigitOccurs(num, digit);
    else
        cout << error;

    return 0;
}



