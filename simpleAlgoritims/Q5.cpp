/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 4 :  print a sand clock
	 * base of the sand clock in n
	 * sandClock must be an odd number
	 */
	int sandClockBase;
	cout << "Please Enter Your Number" << endl;
	cin >> sandClockBase;

	for (int i=sandClockBase; i > 0; i = i - 2) {
		// using std::string to print char multiple time.
		cout << std::string((sandClockBase-i)/2,' ') << std::string(i,'*') << std::string((sandClockBase-i)/2,' ') << endl;
	}

	// starting the lower part form 3
	for (int i=3; i <= sandClockBase; i = i + 2) {
		// using std::string to print char multiple time.
		cout << std::string((sandClockBase-i)/2,' ') << std::string(i,'*') << std::string((sandClockBase-i)/2,' ') << endl;
	}

	return 0;
}
