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
	 * Question Of Shmuel inline task, Print All Prefect Number between 1 - 100
	 * @return: print All perefect numbers
	 */
	int y,tempSum;
	for (int x=1; x<=100; x++) {
		tempSum = 0;
		for (y=1; y <= x / 2; y++) {
			if (x % y == 0) {
				tempSum += y;
			}
		}
		if (tempSum == x) {
			cout << "WoW this is perefect Number " << x << endl;
		}
	}
	return 0;
}



