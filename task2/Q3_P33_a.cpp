/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int reverse(int n1) {
	/*
	 * @n1 - int number
	 * @return  - return the reverse order of this num
	 */
	int newNum = 0,digit;
	while(n1>0) {
		digit = n1 % 10;
		newNum = newNum * 10 + digit;
		n1 = n1 / 10;
	}
	return newNum;
}

int main() {
	/*
	 * Question 3 Page 33 section a
	 * @return: Reverse Number
	 */
	cout << "Reverse - " << reverse(123);
	return 0;
}



