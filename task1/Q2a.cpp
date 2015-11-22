/*
/*
 * Author : Yuri Ritvin
 */
#include <iostream>
#include <math.h>
using namespace std;

int main(char EOF) {
	/*
	 * Question Number 2 page 25 : Get List Of numbers and print avg and geometric_average
	 * get 10 number
	 * print avg and geometric_average
	 */
	int i=0;
	// We counting this on the fly, therefore we use an sum
	int avgSum=0;
	// final result will be saved here
	double avg=0,avgGeomtry=0,avgMulti = 1;
	cout << "Enter 10 numbers" << endl;
	while(i < 10) {
		int tempNumber;
		cin >> tempNumber;
		avgSum += tempNumber;
		avgMulti = avgMulti * tempNumber;
		i++;
	}
	avg = double(avgSum) / 10;

	if (avgMulti == 0) {
		cout << "You Enter Zero, We Can't Calculate Geometry Average" << endl;
	} else {
		avgGeomtry = pow(avgMulti,1.0/10);
		cout << "Geometry Average " << avgGeomtry << endl;
	}

	cout << "Average " << avg << endl;



	return 0;
}



