/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 7 page 29 section b: Get and  Rome Chars Convert it To Base10 Number
	 * Args:
	 * 	romeChars - Rome Chars Number
	 * Validation Rules:
	 * 	Valid Chars input only of the following chars (D,M,L,V,X,I)
	 * 	if there any other char the code will Print Error.
	 */
	// romeChars - Rome Chars As input
	char romeChars;
	// converedNum - Converted Number var
	int converedNum = 0;
	// indicator for any invalid chars
	bool isValid=true;
	cout << "Enter Rome Chars Number" << endl;
	romeChars = cin.get();
	while (romeChars != '\n') {
		char chPrint;
		if (romeChars == 'M') {
			converedNum += 1000;
		} else if (romeChars == 'D' ) {
			converedNum+= 500;
		} else if (romeChars == 'C' ) {
			converedNum+= 100;
		} else if (romeChars == 'L' ) {
			converedNum+= 50;
		} else if (romeChars == 'X' ) {
			converedNum+= 10;
		} else if (romeChars == 'V' ) {
			converedNum+= 5;
		} else if (romeChars == 'I') {
			converedNum+= 1;
		} else {
			isValid = false;
			break;
		}
		romeChars=cin.get();
	}
	if (isValid) {
		cout << "The Number in 10 Base is " << converedNum << endl;
	} else {
		cout << "The Input Was inValid, Please Try Again (remember To enter Letter in UpperCase)" << endl;
	}
	return 0;
}



