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

bool isPolindrom(int num) {
	if (reverse(num) == num)
		return true;
	return false;
}

int main() {
	/*
	 * Question 3 Page 33 section a
	 * @return: Reverse Number
	 */
	cout << "isPolindrom - 123 " << isPolindrom(123) << endl;
	cout << "isPolindrom - 12321 " << isPolindrom(12321) << endl;
	return 0;
}



