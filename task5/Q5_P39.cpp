
/*
 * Yuri Ritvin
 * Question 5 Page 39
 * Return true is number is descending rally
 */

#include <iostream>

using namespace std;

bool isEven(int num, int dig) {
    /*
     * @num - Natural Number
     * return true if dig occur even times in number
     * 1223 2
     */
    if (num == 0 && dig != 0)
        return true;

    bool res = isEven(num / 10, dig);

    if (!res && dig == num % 10)
        return true;
    else if (res && dig == num % 10)
        return false;

    return res;
}
void printBool(bool t) {
    t ? cout << "True" << endl : cout << "False" << endl;
}
int main() {
    int num,dig;
    cout << "Enter num" << endl;
    cin >> num;
    cout << "Enter dig" << endl;
    cin >> dig;

    printBool(isEven(num,dig));
    return 0;
}
