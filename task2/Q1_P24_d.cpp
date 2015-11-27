/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 1 section 4 page 23-24 : Printing Chars Tree
	 * @input -  get Char
	 * print an chars array
	 */
	int nRows,kParts;
	cout << "Please Enter N and K" << endl;
	cin >> nRows >> kParts;
	for (int i = 1; i <= nRows; i++) {
		int charPrint = 1;
		for (int j = 1; j <= (nRows*kParts + kParts); j++) {
			if (j % (nRows + 1) == 0 and j != 0) {
				cout << " @ ";
				charPrint = 0;
			} else {
				char p;
				if (i % 2 == 0) {
					p = '#';
					if (charPrint > i)
						p = '$';
				} else {
					p = '$';
					if (charPrint > i)
						p = '#';
				}
				cout << p;
			}
			charPrint++;
		}
		cout << endl;
	}
	return 0;
}



