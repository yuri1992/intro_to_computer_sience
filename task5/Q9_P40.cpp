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
     * 2^k * m  2 -> k=0,m=1
     *          3 -> k=0,m=3
     *          4 -> K=2,m=1
     *          5 -> k=0,m=5
     *          6 -> k=1,m=3
     *          10 -> k=1,m=5
     *          20 -> k=2,m=4
     *          18 -> k=1,m=9
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
