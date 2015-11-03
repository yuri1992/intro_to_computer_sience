#include <iostream>
using namespace std;


int main3	() {
	/*
	 * Question Number 4 :  Multiplication table
	 * get one number mathCalc, Calc all table until this number
	 */
	int mathCalc;
	cout << "Please Enter Your Number" << endl;
	cin >> mathCalc;
	for (int x=1; x <= mathCalc; x++) {
		for (int y=1; y <= mathCalc; y++) {
			cout << x*y << "\t";
		}
		cout << endl;
	}
	return 0;
}
