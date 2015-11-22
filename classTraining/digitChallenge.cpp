#include <iostream>
using namespace std;
/*
 * digit Challenge ->
 * print all digit that the second digit bigger then third digit and the can be divied by 2
 */

int main(char EOF) {
	int firstDigit = 0;
	while(firstDigit <= 5) {
		int secondDigit = firstDigit;
		while (secondDigit <= 9) {
			int thirdDigit = 0;
			while (thirdDigit <= 9) {
				cout << (firstDigit * 100 + secondDigit * 10 + thirdDigit) << endl;
				thirdDigit += 2;
			}
			secondDigit++;
		}
		firstDigit++;
 	}
}




