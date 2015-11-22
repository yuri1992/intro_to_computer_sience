/*
 * Author : Yuri Ritvin
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	/*
	 * Question Number 3 page 26 : Octal To Base 10
	 * Input:
	 * 	Get Number As seria of chars. break on '\n'
	 * Return:
	 *  Base 10 Number
	 */
	//temporary char
	char ch;
	int base10 = 0;

	cout << "Enter an Octal number\n";
	// Using cin.get() to get an seria of chars
	ch=cin.get();

	while(ch != '\n'){
		// iteration over all chars on cin.get()
		// implement of base8 convert to base 10
		base10 = base10 * 8 + int(ch - '0');
		ch=cin.get();
	}

	cout<<"Base10 "<< base10;
}



