/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 7 page 19 : Print Arrival Time
	 * get 4 numbers, in the next format hour min sec timeOfDrive(seconds)
	 * return arrival time in the next format hour min sec
	 */
	int hour,min,sec,timeOfDrive;
	cout << "Enter Current Time (hour min sec) and time of driving" << endl;
	cin >> hour >> min >> sec >> timeOfDrive;

	sec += timeOfDrive % 60;
	min += (timeOfDrive / 60) % 60;
	hour += ((timeOfDrive / 60) / 60) % 60;
	cout << "Arrival Time Will be " << hour << ":" << min << ":" << sec << endl;
	return 0;
}



