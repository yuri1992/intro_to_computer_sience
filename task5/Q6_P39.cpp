
/*
 * Yuri Ritvin
 * Question 6 Page 39
 * Print number is base 2
 */

#include <iostream>

using namespace std;
void printInBinary(int num) {
    /*
     * printInBinary
     * @num - >=0
     * return convert @num to base 2 (binary)
     */
    if (num != 0) {
        printInBinary(num / 2);
        cout << num % 2;
    }
}
void printBool(bool t) {
    t ? cout << "True" << endl : cout << "False" << endl;
}
int main() {
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    printInBinary(num);
    return 0;
}
