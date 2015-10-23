/*
 * Simple Algorithms Work
 * Question 1: Convert Number To Desire Base
 */


#include <iostream>
#include <math.h>

using namespace std;

const string base = "0123456789ABCDEF";

int covertFromHex(string num, int targetBase) {
	/*
	 * convertFromHex : return int from hex number
	 */
	int total = 0;
	int step = 0;
	for (int i = num.size() - 1; i >= 0; i--) {
		int hexNum = base.find(num[i]);
		total += hexNum * pow(16, step);
		step++;
	}
	return total;
}

int convertBase(int num, int curBase, int targetBase) {
	/*
	 * convertBase - return number after converting to @targetBase
	 * @params:
	 * 		@num - int Number
	 * 		@curBase - current Base of the number
	 * 		@targetBase - new Base to convert
	 */
	int step = 0;
	int total = 0;
	while (num > 0) {
		total += (num % targetBase) * pow(curBase, step);
		num = num / targetBase;
		step++;
	}
	return total;
}

int main() {
	cout << "converting 10011011 form base 2 to base 10" << endl;
	cout << convertBase(10011011, 2, 10) << endl;

	cout << "converting 456 form base 7 to base 10" << endl;
	cout << convertBase(456, 7, 10) << endl;

	cout << "converting 38A form base 16 to base 10" << endl;
	cout << covertFromHex("38A", 10) << endl;

	cout << "converting 2214 form base 5 to base 10" << endl;
	cout << convertBase(2214, 5, 10) << endl;
//
//	cout << "converting 1744 form base 8 to base 2" << endl;
//	cout << convertBase(1744, 8, 2) << endl;
//
//	cout << "converting 485 form base 10 to base 2" << endl;
//	cout << convertBase(485, 10, 2) << endl;
//
//	cout << "converting 456 form base 7 to base 2" << endl;
//	cout << convertBase(456, 7, 2) << endl;
}
