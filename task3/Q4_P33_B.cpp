/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;

bool digitEqual(int num) {
    /*
     * digitNotEqual
     * @num - number to be checked if all his digit are diffrent
     * return true if digit are same
     */
    int digit,tempNum;
    while (num > 0 ) {
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

int main() {
    /*
     * Question Number 4 page 33 section b
     * Args:
         * 	num - Integer
     */
    int num = 41353;

    if (digitEqual(num))
        cout << "Digit are Equal ";
    else
        cout << "digits are not Equal";

    return 0;
}



