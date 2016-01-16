/*
 * Yuri Ritvin
 * Question 9 Page 40
 * print prime factor of number >= 2
 */

#include <iostream>
#include <math.h>

using namespace std;

int possibleRoutes(int x, int y) {
    /*
     * @x - >= 0
     * @y - >= 0
     * return all possible routes to go from (x,y) to (0,0) by steps of one
     */
    if (x < 0 || y < 0)
        return 0;

    if (x==0 && y==0)
        return 1;

    if (x > 0 && y > 0)
        return possibleRoutes(x - 1, y) + possibleRoutes(x, y - 1);

    if (x==0 && y > 0)
        return possibleRoutes(x, y - 1);

    if (x > 0 && y == 0)
        return possibleRoutes(x - 1, y);
}

int main() {
    int x,y;
    cout << "Enter x,y" << endl;
    cin >> x;
    cin >> y;
    cout << "Number of possible routes " <<  possibleRoutes(x,y) << endl;
    return 0;
}
