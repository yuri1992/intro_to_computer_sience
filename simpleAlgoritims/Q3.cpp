#include <iostream>
using namespace std;


int main(char EOF) {
	/*
	 * Question Number 3 :  Check if digits of number are in increment order
	 * get one number mathCalc, Calc all table until this number
	 */
	int num;
	int prevNum;
	bool incrOrder = true;
	cout << "Please Enter Your Number" << endl;
	cin >> num;
	prevNum = num % 10;
	num = num / 10;
	while(num > 0) {
		if (num % 10 > prevNum) {
			incrOrder = false;
			break;
		}
		prevNum = num % 10;
		num = num / 10;
	}
	if (incrOrder)
		cout << "Number is in increment order" << endl;
	else
		cout << "Number Is NOT in increment order" << endl;
	return 0;
}
