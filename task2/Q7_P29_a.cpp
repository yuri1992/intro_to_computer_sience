/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 7 page 29 : Get and Base10 Number Convert it To Rome Chars
	 * Args:
	 * 	num - Base 10 number to be converted to rome chars
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
		// take each digit an multiple it by his place etc (123 = 3*1 ,2*10 1*100)
		tempNum = num % 10 * digitMult;

		// Initial the String to empty
		c_word = "";

		/*
		 * Algorithm-
		 *	Taking Each Digit From the original number and trying to convert it to Rome chars
		 *	by this logic-
		 *	I Trying to check which one from the chars is the best convert,
		 *	by checking if Digit minus - Rome Char Value bigger then 0
		 *	if True -> take this char and minus the value of the char form the number.
		 *	if False -> continue to next possible Char
		 */
		while (tempNum > 0) {
			char chPrint;
			int chValue=0;

			if (tempNum - 1000 >= 0) {
				chPrint = 'M';
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
		// Adding the new Rome Chars To the complete value.
		word = c_word + word;
		// preparing Vars For Next Iteration
		num = num / 10;
		digitMult = digitMult * 10;
	}
	cout << "The Number in Rome Digit is " << word << endl;
	return 0;
}



