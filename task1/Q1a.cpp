/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main(char EOF) {
	/*
	 * Question Number 1 section 1 page 23-24 : Printing *
	 * get number and print * in nice output
	 *
	 * algorithm planing
	 * while (rowNumber <= n) {
			while(charPointer < rowNumber) {
				// printing first *
			}
			while(charPointer < (n*2 - rowNumber)) {
				printing white spaces
			}
			while(charPointer < (n*2)) {
				printing the last *
			}
		}
	 *
	 */
	int n,rowNumber = 1;
	cout << "Enter N :" << endl;
	cin >> n;
	while (rowNumber <= n) {
		int charPointer = 0;
		while(charPointer<rowNumber) {
			cout<< "*";
			charPointer++;
		}
		while(charPointer < (n*2 - rowNumber)) {
			cout<<" ";
			charPointer++;
		}
		while(charPointer < (n*2)) {
			cout<< "*";
			charPointer++;
		}
		cout << " " << endl;
		rowNumber++;
	}
	return 0;
}



