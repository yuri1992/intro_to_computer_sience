/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 1 section 3 page 23-24 : Printing Chars Tree
	 * @input -  get Char
	 * print an chars array
	 */
	int nRows,kParts;
	cout << "Please Enter N and K" << endl;
	cin >> nRows >> kParts;
	for (int i = 1; i <= nRows; i++) {
		int charPrint = i;
		for (int j = 1; j <= (nRows*kParts + kParts); j++) {
			if (j % (nRows + 1) == 0 and j != 0) {
				cout << " @ ";
			} else {
				cout << " " << charPrint -1<< " ";
				charPrint++;
			}

			if (charPrint % (nRows+i) == 0) {
				charPrint = i;
			}
			if (charPrint > nRows)
				charPrint = 1;
		}
		cout << endl;
	}
	return 0;
}



