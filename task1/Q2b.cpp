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

	//section 2 - first input is the size of the numbers
	int avgSum=0,i=0;
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
	if (numbers == 0) {
		cout << "We Can not Calculate Average for 0 Elements" << endl;
	} else {
		avg = double(avgSum) / numbers;
		cout << "Average " << avg << endl;
		if (avgMulti == 0) {
			cout << "You Enter Zero, We Can't Calculate Geometry Average" << endl;
		} else {
			avgGeomtry = pow(avgMulti,1.0/ numbers);
			cout << "Geometry Average " << avgGeomtry << endl;
		}
	}

	return 0;
}



