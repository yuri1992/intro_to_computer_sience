/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main(char EOF) {
	/*
	 * Question Number 2 page 21 : Sort Numbers
	 * Get 3 "Real" Numbers, Print Them From Max to Min.
	 */
	double n1,n2,n3;
	cout << "Please Enter 3 Real Numbers" << endl;
	cin >> n1 >> n2 >> n3;

	// Nested Rules For Finding The Biggest Number, Middle Number and Lowest Number

	/*
	 * 1. N1>N2 N1>N3
	 * 1.1 N2 > N3
	 * 1.2 N3 > N2
	 * 2. N2>N1 N2>N3
	 * 2.2 N1 < N3
	 * 2.3 N3 > N1
	 * 3 N3 > N1 N3 > N2
	 * 3.1 N2 > N1
	 * 3.2 N1 > N2
	*/
	if (n1 > n2 and n1 > n3) {
		cout << "Biggest " << n1 << endl;
		if (n2 > n3) {
			cout << "Middle " << n2 << " Lowest " << n3 << endl;
		} else {
			cout << "Middle " << n3 << " Lowest " << n2 << endl;
		}
	} else if (n2 > n1 and n2 > n3) {
		cout << "Biggest " << n1 << endl;
		if (n1 > n3) {
			cout << "Middle " << n1 << " Lowest " << n3 << endl;
		} else {
			cout << "Middle " << n3 << " Lowest " << n1 << endl;
		}
	} else {
		cout << "Biggest " << n3 << endl;
		if (n2 > n1) {
			cout << "Middle " << n2 << " Lowest " << n1 << endl;
		} else {
			cout << "Middle " << n1 << " Lowest " << n2 << endl;
		}
	}

	return 0;
}



