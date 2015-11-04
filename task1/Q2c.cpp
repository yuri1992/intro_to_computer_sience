/*
/*
 * Author : Yuri Ritvin
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	/*
	 * Question Number 2 page 25 : Get List Of numbers and print avg and geometric_average
	 * get 10 number
	 * print avg and geometric_average
	 */
	int i=0;
	// We counting this on the fly, therefore we use an sum

	//section 3 - first input is the size of the numbers
	int avgSum=0;
	int tempNumber,i=0;

	// final result will be saved here
	double avg=0,avgGeomtry=0,avgMulti = 1;
	cout << "Enter numbers (-1 to break)" << endl;
	cin >> tempNumber;
	while(tempNumber != -1) {
		avgSum += tempNumber;
		avgMulti = avgMulti * tempNumber;
		i++;
		cin >> tempNumber;
	}
	if (i == 0) {
		cout << "We Can not Calculate Average for 0 Elements" << endl;
	} else {
		avg = double(avgSum) / i;
		cout << "Average " << avg << endl;
		if (avgMulti == 0) {
			cout << "You Enter Zero, We Can't Calculate Geometry average" << endl;
		} else {
			avgGeomtry = pow(avgMulti,1.0/i);
			cout << "Geometry Average " << avgGeomtry << endl;
		}
	}
}



