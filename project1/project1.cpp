/*
 * Author : Yuri Ritvin
 */
#include <iostream>
#include <math.h>

using namespace std;

int sumDividers(int num) {
    int tempSum = 1, y;
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

void section1(int num) {
    /*
     * section1 - Printing all perefect number until @num
     * @num - user input value
     */
    bool foundPrefectNumber = false;
    cout << "The perfect numbers smaller or equal to " << num << " are:" << endl;
    for (int i = 2; i < num; i++) {
        if (isPerefectNum(i)) {
            foundPrefectNumber = true;
            cout << i << endl;
        }
    }

    if (!foundPrefectNumber)
        cout << "No perefect number in this range.. sorry" << endl;
}

int section2(int num1, int num2) {
    /*
     * section2  - Building new number from two other numbers
     * @num1 - int number
     * @num2 - int number
     * @return - new number digits(num1 - num2 num1 + num2)
     */

    int newNum = num1 + num2, tempNum = num1 - num2;
    int base = pow(10, countDigit(newNum));

    if (tempNum < 0)
        tempNum *= -1;

    while (tempNum > 0) {
        newNum += base * (tempNum % 10);
        base = base * 10;
        tempNum = tempNum / 10;
    }

    if (num1 - num2 < 0)
        newNum *= -1;

    return newNum;
}

int reverseDigits(int num) {
    /*
     * reversing Digits of number
     * @num
     * @return reversed number
     */
    int outNum = 0;
    while (num > 0) {
        outNum = outNum * 10 + (num % 10);
        num = num / 10;
    }
    return outNum;
}

int section3(int num) {
    /*
     * section3 - Building new Number From other number by switching his digits
     * @return - new  number
     */
    int temp, newNum, base = 1;
    while (num > 0) {
        newNum = newNum + reverseDigits(num % 100) * base;
        base *= 100;
        num = num / 100;
    }
    return newNum;
}

void section4(int num) {
    /*
     * section 4 - printing * by formation
     */
    for (int y = 0; y < num; y++) {
        for (int i = 0; i < num * 2; i++) {
            if (i < (num - y) || i >= (num + y))
                cout << "* \t";
            else {
                cout << " \t";
            }
        }
        cout << endl;
    }
}

void section5(int k, int n) {
    /*
     * section 5 - printing numbers piramide
     * @k - number of piramides
     * @n - pick number
     */
    int x, y, row;
    for (int row = 1; row <= n; row++) {
        for (y = 0; y < k; y++) {
            for (x = 1; x <= n; x++) {
                if (x < row)
                    cout << "  ";
                else
                    cout << x << " ";
            }
            for (x = n - 1; x > 0; x--) {
                if (x < row)
                    cout << "  ";
                else
                    cout << x << " ";
            }
        }
        cout << endl;
    }
    for (int row = n; row > 0; row--) {
        for (y = 0; y < k; y++) {
            for (x = 1; x <= n; x++) {
                if (x < row)
                    cout << " " << " ";
                else
                    cout << x << " ";
            }
            for (x = n - 1; x > 0; x--) {
                if (x < row)
                    cout << "  ";
                else
                    cout << x << " ";

            }
        }
        cout << endl;
    }

}


void section6(char dir, int k, int n) {
    int y;
    for (y = 1; y <= n * 2; y++) {
        for (int z = 0; z < k; z++) {
            for (int x = 1; x <= (n * 2 - 1); x++) {
                // arrow body
                if (dir == 'u') {
                    if (n == x) {
                        cout << "* ";
                    } else if (x - y == n - 1) {
                        cout << "* ";
                    } else if (x + y == n + 1) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                } else {
                    if (n == x) {
                        cout << "* ";
                    } else if (y - x == n) {
                        cout << "* ";
                    } else if (y + x == n * 3) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
            }
        }
        cout << endl;
    }
}


void section7(int n, int k) {
    bool isBlack = true;
    for (int y = 1; y <= k * n; y++) {
        for (int i = 1; i <= k * n; i++) {
            if (isBlack)
                cout << "* ";
            else
                cout << "_ ";

            if (i % k == 0)
                isBlack = isBlack ? false : true;
        }
        cout << endl;
        if (y % k == 0)
            isBlack = isBlack ? false : true;
    }
}

void printMenu() {
    /*
     * Printing the Menu.
     */

    for (int i = 1; i < 8; i++) {
        cout << "Press " << i << " for section. " << i << ":" << endl;
    }
    cout << "Press E or e to exit:" << endl;

}

void exit() {
    cout << "Goodbye." << endl;
}

void handle() {
    /*
     * handle - factory function handling input and triggering the right function
     */
    int tempInt, tempInt2;
    char menuSelection, tempChar;
    printMenu();
    cin >> menuSelection;

    switch (menuSelection) {
        case '1':
            cout << "Please enter a natural number:" << endl;
            cin >> tempInt;
            section1(tempInt);
            break;
        case '2':
            cout << "Please enter two positive integers:" << endl;
            cin >> tempInt >> tempInt2;
            cout << "The new number is " << section2(tempInt, tempInt2) << endl;
            break;
        case '3':
            cout << "Please enter an integer:" << endl;
            cin >> tempInt;
            cout << "The new number is " << section3(tempInt) << endl;
            break;
        case '4':
            cout << "Please enter a natural number:" << endl;
            cin >> tempInt;
            section4(tempInt);
            break;
        case '5':
            cout << "Please enter two natural numbers:" << endl;
            cin >> tempInt >> tempInt2;
            section5(tempInt2, tempInt);
            break;
        case '6':
            cout << "Please enter two positive integers:" << endl;
            cin >> tempInt >> tempInt2;
            cout << "Please enter a char (d or u):" << endl;
            cin >> tempChar;
            section6(tempChar, tempInt2, tempInt);
            break;
        case '7':
            cout << "Please enter two integers:" << endl;
            cin >> tempInt >> tempInt2;
            section7(tempInt, tempInt2);
            break;
        case 'e':
            exit();
            break;
        case 'E':
            exit();
            break;
        default:
            cout << "Invalid input. Try again." << endl;
            handle();
            break;
    }
}

int main() {
    handle();
    return 0;
}
