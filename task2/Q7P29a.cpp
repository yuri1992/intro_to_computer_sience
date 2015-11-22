/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 7 page 29 : Number to Rome Digits
	 * get a number (x > 0)  and convert it to Rome Chars

	 */
	// num -  get num into num
	// newNum - number after reverse
	// tempNum - temporary number
	int num, digitMult=1;
	string word;
	string c_word;
	cout << "Enter Number for Number" << endl;
	cin >> num;

	while (num > 0) {
		int tempNum = 0;
		tempNum = num % 10 * digitMult;
		c_word = "";
		while (tempNum > 0) {

			char chPrint;
			int chValue=0;

			if (tempNum - 1000 >= 0) {
				chPrint = 'm';
				chValue = 1000;
			} else if (tempNum - 500 >= 0 ) {
				chPrint = 'D';
				chValue = 500;
			} else if (tempNum - 100 >= 0 ) {
				chPrint = 'C';
				chValue = 100;
			} else if (tempNum - 50 >= 0 ) {
				chPrint = 'L';
				chValue = 50;
			} else if (tempNum - 10 >= 0 ) {
				chPrint = 'X';
				chValue = 10;
			} else if (tempNum - 5 >= 0 ) {
				chPrint = 'V';
				chValue = 5;
			} else {
				chPrint = 'I';
				chValue = 1;
			}
			tempNum = tempNum - chValue;
			c_word += chPrint;
		}
		word = c_word + word;
		num = num / 10;
		digitMult = digitMult * 10;
	}
	cout << "The Number in Rome Digit is " << word << endl;
	return 0;
}



