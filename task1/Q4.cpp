/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 4 page 26 : Polindrom Checker
	 * get num, check if it polindrom number
	 * algorithm:
	 * while number > 0
	 * sum = Multiple the sum * 10 + add the last digit
	 * number = divide by 10;
	 */
	// num -  get num into num
	// newNum - number after reverse
	// tempNum - temporary number
	int num, newNum=0, tempNum;
	cout << "Enter Number for polindrom checking" << endl;
	cin >> num;
	tempNum = num;
	while (tempNum > 0) {
		newNum = newNum * 10 + (tempNum % 10);
		tempNum = tempNum / 10;
	}
	if (num == newNum)
		cout << "This is Polindrome !!!!" << endl;
	else
		cout << "Ohhh this is not a polindrome" << endl;
	return 0;
}



