/*
 * Yuri Ritvin
 * Question 2 section A Page 54
 */

#include <iostream>


using namespace std;
const int MAX_ARR_LEN = 100;

struct appear {
    char ch;
    int n_appearances;
};
typedef struct appear APPEAR;

void appearances(char *str, APPEAR appear_arr[], int &n) {
    /*
     * appearances
     * @*str - char array
     * @appear_list[] - list of appear struct
     * @&n - reference to n
     */
    if (str[0] != '\0') {
        bool isFound = false;
        for(int i=0; i< n;i++) {
            if (appear_arr[i].ch == str[0]) {
                appear_arr[i].n_appearances++;
                isFound = true;
                break;
            }
        }
        if (!isFound) {
            appear_arr[n].ch = str[0];
            appear_arr[n].n_appearances = 1;
            n++;
        }
        appearances(str+1,appear_arr, n);
    }
}


int main() {
    int n = 0;
    APPEAR *ap = new APPEAR[MAX_ARR_LEN];
    char *ch = new char[MAX_ARR_LEN];

    cout << "Enter string" << endl;
    cin.getline(ch, MAX_ARR_LEN);

    appearances(ch, ap, n);

    for (int i=0;i < n;i++) {
        cout << ap[i].ch << " num of appear " << ap[i].n_appearances << endl;
    }
    return 0;
}
