/*
 * Yuri Ritvin
 * Question 3 Page 38
 * Print An Ruler
 */
#include <iostream>
using namespace std;

void drawRuler(int k)
{
    /*
     * drawRuler
     * @k - number of sizes
     */
    int i;

    if (k==1)
        cout << endl;
    else {
        drawRuler(k-1);

        for(i=1; i<=k; i++) {
            cout << "-";
        }
        cout << endl;
        drawRuler(k-1);
        return;
    }
}
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    drawRuler(n);
    return 0;
}
