
/*
 * Yuri Ritvin
 * Question 8 Page 40
 * print prime factor of number >= 2
 */

#include <iostream>

using namespace std;

int getNextPrime(int start) {
    /*
     * @start >= 2
     * return the next prime number after @start
     */
    int i = start++;
    int y;
    while (true) {
        bool prime = true;
        for (y = 2; y<i; y++) {
            if (i % y == 0) {
                prime = false;
                break;
            }
        }
        if (prime)
            return i;
        i++;
    }
}

void printPrimeFactors(int num) {
    /*
     * @num - >= 2
     * print his prime factors
     */
    if (num != 0) {
        for (int i=2; i< num; i++) {
            int prime = getNextPrime(i);
            if (num % prime == 0) {
                cout << prime << " ";
                printPrimeFactors(num / prime);
                break;
            }
        }
    }
}

int main() {
    int num,dig;
    cout << "Enter num" << endl;
    cin >> num;
    printPrimeFactors(num);
    return 0;
}
