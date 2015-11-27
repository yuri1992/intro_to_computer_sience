/*
 * Author : Yuri Ritvin
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	/*
	 * Question Number 6 page 28
	 * Input:
	 * 	get a,b,c,d,n int numbers
	 * Return:
	 *  counting how much possible results have the next function
	 *  A*x + B*y + C*z = D, In the rage of 2/n < x,y,z < 2/n
	 */
	//temporary char
	int a,b,c,d,n;
	//last possible results vars
	int lastX,lastY,lastZ;
	int numResults = 0,tempSol;

	cout << "Enter an A,B,C,D Parameters \n";
	cin >> a >> b >> c >> d;
	cout << "Enter an n for range \n";
	cin >> n;

	// if N < 0 lets multiple it by -1 to get and positive number
	if (n<0)
		n = n * -1;

	//checking all Possible parameters for x and y,
	//then calculating the Z value and check if it in range
	for (int x=n/-2;x <= n/2; x++) {
		for (int y=n/-2;y <= n/2; y++) {
			tempSol = ((d - (x*a + b*y)) / c);
			if ((d - (x*a + b*y)) % c == 0 and n/2 >= tempSol and n/-2 <= tempSol) {
				cout << x << "," << y << "," << tempSol << endl;
				lastX = x;
				lastY = y;
				lastZ = tempSol;
				numResults++;
			}
		}
	}

	//if no results dont print
	if (numResults > 0) {
		cout << "There are " << numResults << "solutions for " << a << "*x" << b << "*y" << c << "*z =" << d <<endl;
		cout << "Where: " << n/-2 << " <= x,y,z <= " << n/2 << endl;
		cout << "One such solution is (" << lastX << "," << lastY << "," << lastZ << ")";
	} else {
		cout << "No Possible Results Founded" << endl;
	}

}



