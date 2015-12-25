
/*
 * Yuri Ritvin
 * Question 3 section B Page 51 15.12
 * strend - return true if @*t is suffix to @*s
 */

#include <iostream>

using namespace std;
const int SIZE = 100;

bool strend(char *s, char *t) {
    /*
     * running on both string form the end while the @*t is have letters
     * if there even char that no equal will return false;
     */
    int y = 0, i = 0;
    while (s[y++]);
    while (t[i++]);

    y--;
    i--;

    while (i >= 0) {
        if (s[y--] != t[i--])
            return false;
    }
    return true;
}

int main() {
    char t[SIZE];
    char s[SIZE];

    cout << "Enter String(t) in maximum size " << SIZE << endl;
    cin.getline(t, SIZE);
    cout << "Enter String(s) in maximum size " << SIZE << endl;
    cin.getline(s, SIZE);

    if (strend(s, t))
        cout << "t is suffix to s " << endl;
    else
        cout << "t is not suffix for s " << endl;
    return 0;
}