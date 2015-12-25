
/*
 * Yuri Ritvin
 * Question 3 Page 51 15.12
 * strcat, copy *s (char) to the end of *t (char)
 */

#include <iostream>

using namespace std;
const int SIZE = 100;

void strcat(char *t, char *s) {
    /*
     * @*t - pointer to string t, assume that t size is bigger then len(t) + len(s) + 1
     * @*s - pointer to string s
     * copying all *s string to end of *t
     */
    int i, y = 0;

    for (i = 0; t[i]; i++);

    while (s[y] != 0) {
        t[i] = s[y];
        i++;
        y++;
    }
    t[i] = '\0';

}

int main() {
    char t[SIZE];
    char s[SIZE];
    cout << "Enter String(t) in maximum size " << SIZE << endl;
    cin.getline(t, SIZE);
    cout << "Enter String(s) in maximum size " << SIZE  << endl;
    cin.getline(s, SIZE);
    strcat(t, s);
    cout << "after strcat " << t << endl;

    return 0;
}