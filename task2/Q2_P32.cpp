/*
 * Author : Yuri Ritvin
 */
#include <iostream>
using namespace std;

double maxNumber(double n1,double n2,double n3) {
	/*
	 * Return The Biggest Number
	 * @n1 - real number
	 * @n2 - real number
	 * @n3 - real number
	 * @return biggest number
	 */
	if (n1 > n2 and n1 > n3)
		return n1;
	if (n2 > n1 and n2 > n3)
		return n2;
	return n3;
}

double minNumber(double n1,double n2,double n3) {
	/*
	 * Return The Biggest Number
	 * @n1 - real number
	 * @n2 - real number
	 * @n3 - real number
	 * using only maxNumber, By getting the max Number first and then getting
	 * the diff between biggest number to minimal number we can know how is the minimal number
	 * 5,3,2 - max = 5, max-5 =0,max-3=2,max-2=3,  biggest diff 3, max-diff = minimal number
	 * @return Minimal number
	 */
	double max = maxNumber(n1,n2,n3);
	double diff = maxNumber(max-n1,max-n2,max-n3);
	return max-diff;
}

int main() {
	/*
	 * Question 2 Page 32 section a and b
	 * @return: print All Perefect numbers
	 */
	cout << "max Number 2,3,5 - " << maxNumber(2,3,5);
	cout << "mix Number 2,3,5 - " << minNumber(1232,3,5);
	return 0;
}



