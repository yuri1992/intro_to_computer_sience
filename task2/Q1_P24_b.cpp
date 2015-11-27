/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 1 section 1 page 23-24 : Printing Chars Tree
	 * @input -  get Char
	 * print an chars array
	 */
	char charIn;
	int x,y;

	cin >> charIn;
	//validation
	if (int(charIn) < 97 or int(charIn) > 122) {
		cout << "you Must enter an lowercase english alphabetic char"<< endl;
		return 0;
	}

	int charsPerRow = int(charIn) - int('a');

	for (int i=int('a');i<=int(charIn);i++) {
		// Printing White Space to screen
		// This number been calculated by charsPerRow - char in currect row.
		for(x=(int(i)-int('a'));x<charsPerRow;x++){
			cout << " ";
		}
		//printing all chars from a to i char
		for (x=int('a');x<int(i);x++) {
			cout << char(x);
		}
		//printing the i char
		cout << char(i);

		//printing all chars from a to i char
		for (y=int('a');y<int(i);y++) {
			cout << char(y);
		}
		// new line
		cout << endl;
	}

	return 0;
}



