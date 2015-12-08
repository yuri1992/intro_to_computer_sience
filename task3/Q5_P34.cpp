/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;

const int NEGTIVE_NUMBER_INPUT = -1;
const int TOO_MUCH_CHARS = -2;
const int INDICES_UNEXCEPTED = -3;

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
    /*
     * @num
     * @indices
     * building an new number by indices
     */
    int index, newNum = 0, digit;
    int multi = 1;
    while (indices > 0) {
        index = indices % 10;
        digit = getDigitByIndex(num, index);
        if (digit == -1)
            return -1;
        newNum += digit * multi;
        multi = multi * 10;
        indices = indices / 10;
    }
    return newNum;
}

int validate(int num, int indices) {
    /*
     * validate
     *  @num - number to be searched in
     *  @indices - indices to be build form it.
     * rules
     *  num and indices must to be positive
     *  num and indices must have at must 9 chars
     */
    if (num < 0 or indices <= 0)
        return NEGTIVE_NUMBER_INPUT;
    else if (countDigit(num) > 8 or countDigit(indices) > 8)
        return TOO_MUCH_CHARS;
    return 1;
}

int main() {
    int indices, num;
    cout << "enter number " << endl;
    cin >> num;
    cout << "enter indices " << endl;
    cin >> indices;

    int error = validate(num, indices);

    if (error == NEGTIVE_NUMBER_INPUT) // Validation Input
        cout << "You Must to enter an positives numbers" << endl;
    else if (error == TOO_MUCH_CHARS) // Validation Input
        cout << "Youre Number Must to have at most 9 chars" << endl;
    else {
        int n = buildNumber(num, indices);
        if (n == -1) // Validation Input
            cout << "Error!! The indices not match to number" << endl;
        else
            cout << "your New Number " << n << endl;

    }

    return 0;
}