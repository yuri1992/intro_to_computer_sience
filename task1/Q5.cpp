/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

int main() {
	/*
	 * Question Number 5 page 27 : Social Id Prefix Calculator
	 * get Social Id number
	 * return Social Id Prefix
	 */
	// socialId
	int socialId,tempNum,nextMultiplier = 2, socialSum=0, tempDigit;
	/*
	 * socialId (int) - socialId from User
	 * tempNum - temporary Number for Calculation
	 * nextMultiplier - for each digit we need to change the Multiplier number
	 * socialSum - Sum of the Digit after the Multiplying
	 * tempDigit - temporary Digit for SocialSum Counting
	 */
	cout << "Enter Your Social ID" << endl;
	cin >> socialId;
	tempNum = socialId;
	while (tempNum > 0) {
		// get digit and multiple it by 1 or 2
		tempDigit = (tempNum % 10) * nextMultiplier;

		while (tempDigit > 0) {
			//sum the digits
			socialSum += (tempDigit % 10);
			tempDigit = tempDigit / 10;
		}

		//change the multiplier for next iteration
		if (nextMultiplier == 1)
			nextMultiplier = 2;
		else
			nextMultiplier = 1;

		tempNum = tempNum / 10;
	}
	cout << "Social Id " << socialId << endl;
	//count the prefix by tell what the diffrent to 10
	cout << "Prefix Number " << (10 - socialSum % 10) << endl;
	return 0;
}



