/*
 * Yuri Ritvin
 * Question 7 Page 39
 * Print all possible way to get up on leather
 */

#include <iostream>

using namespace std;

int numWays(int num) {
    /*
     * numWays
     * @num - >=0
     * print all possible ways to get up on leather
     */
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    if (num == 2)
        return 2;

    return numWays(num - 1) + numWays(num - 2);
}

void printBool(bool t) {
    t ? cout << "True" << endl : cout << "False" << endl;
}

int main() {
    int num;
    cout << "Enter lether levels" << endl;
    cin >> num;
    cout << numWays(num);
    return 0;
}
