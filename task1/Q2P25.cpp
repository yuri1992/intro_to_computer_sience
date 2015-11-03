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

	avgGeomtry = pow(avgMulti,1.0/10);
	cout << "Average " << avg << endl;
	cout << "Geometry Average " << avgGeomtry << endl;


	//section 2 - first input is the size of the numbers
	int avgSum=0;
	int numbers;

	// final result will be saved here
	double avg=0,avgGeomtry=0,avgMulti = 1;
	cout << "Enter numbers" << endl;
	cin >> numbers;
	while(i < numbers) {
		int tempNumber;
		cin >> tempNumber;
		avgSum += tempNumber;
		avgMulti = avgMulti * tempNumber;
		i++;
	}
	avg = double(avgSum) / numbers;

	avgGeomtry = pow(avgMulti,1.0/numbers);
	cout << "Average " << avg << endl;
	cout << "Geometry Average " << avgGeomtry << endl;

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
	avg = double(avgSum) / i;

	avgGeomtry = pow(avgMulti,1.0/i);
	cout << "Average " << avg << endl;
	cout << "Geometry Average " << avgGeomtry << endl;
	return 0;
}



