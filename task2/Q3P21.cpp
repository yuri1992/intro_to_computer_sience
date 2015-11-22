/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main(char EOF) {
	/*
	 * Question Number 7 page 19 : Print Arrival Time
	 * get 4 numbers, in the next format hour min sec timeOfDrive(seconds)
	 * make Validation for input,
	 * 	1.check that all numbers in the right order,
	 * 	2.check input is valid (number correspond to time)
	 * return arrival time in the next format hour min sec
	 */
	int hour,min,sec,timeOfDrive;
	cout << "Enter Current Time (hour min sec) and time of driving" << endl;
	cin >> hour >> min >> sec >> timeOfDrive;

	// Input Validation, On Error Return and end the program.
	if (hour <= 0 or hour > 24) {
		cout << "Hour Value Must be Between 0 to 24" << endl;
		return 0;
	}
	else if (min < 0 or min > 60) {
		cout << "Minutes Value Must be Between 0 to 60" << endl;
		return 0;
	}
	else if(sec < 0 or sec > 60) {
		cout << "Seconds Value Must be Between 0 to 60" << endl;
		return 0;
	}
	else if(timeOfDrive <= 0) {
		cout << "Wow, Your are Super Sonic ? Drive Time must be bigger them 0" << endl;
		return 0;
	}

	sec += timeOfDrive % 60;
	min += (timeOfDrive / 60) % 60;
	hour += ((timeOfDrive / 60) / 60) % 60;
	cout << "Arrival Time Will be " << hour << ":" << min << ":" << sec << endl;
	return 0;
}



