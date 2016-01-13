
/*
 * Yuri Ritvin
 * Question 4 Page 38
 * Return true is number is descending rally
 */

#include <iostream>

using namespace std;

bool isDescendingNumber(int num) {
    /*
     * @num - Natural Number
     * return true if number digits is Descending order
     * 987654321
     */
    if (num < 10)
        return true;

    if (num % 10 >= num / 10 % 10)
        return false;

    return isDescendingNumber(num / 10);
}
void printBool(bool t) {
    t ? cout << "True" << endl : cout << "False" << endl;
}
int main() {
    int i;
    cin >> i;
    printBool(isDescendingNumber(i));
    return 0;
}
