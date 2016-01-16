/*
 * Yuri Ritvin
 * Question 9 Page 40
 * print prime factor of number >= 2
 */

#include <iostream>
#include <math.h>

using namespace std;

void find2Factor(int num, int &k, int &m) {
    /*
     * find2Factor
     *  solving the formula 2^k*m with recursion
     *  @num = 2^k*m = num
     */
    if (num % 2 == 1) {
        k = 0;
        m = num;
    } else {
        find2Factor(num/2, k , ++m);
        k++;
    }
}

int main() {
    int num, k, m;
    cout << "Enter num" << endl;
    cin >> num;
    find2Factor(num, k, m);
    cout << "k " << k << " m " << m;
    return 0;
}
