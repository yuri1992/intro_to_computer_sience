/*
 * Author : Yuri Ritvin
 */
#include <iostream>
#include <math.h>
using namespace std;

// const Initial
const int ROUND_DOWN = 1;
const int ROUND_UP = 2;
const int ROUND = 3;

int main() {
	/*
	 * Question Number 4 page 22 : Rounding Numbers By Demand
	 * Input:
	 * 	@type Type Of Rounding, According to const ROUND_DOWN,ROUND_UP,ROUND
	 *  @num (double) - Number to round
	 * Return:
	 *  Rounded Number
	 */
	int type;
	double num;
	// Input and Output for Getting @type and @num
	cout << "Choose your round method: \n \
1. Floor round \n \
2. Ceiling round \n \
3. Round to the nearest whole number \n" << endl;
	cin >> type;
	cout << "Enter Number to round: " << endl;
	cin >> num;

	// using Math.h libaray to round up,down and regular.
	cout << "The Rounded Number is :";
	switch (type) {
		case ROUND_UP:
			cout << ceil(num) << endl;
		break;
		case ROUND_DOWN:
			cout << floor(num) << endl;
		break;
		case ROUND:
			cout << round(num) << endl;
		break;
	}
	return 0;
}



