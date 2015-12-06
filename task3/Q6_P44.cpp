/*
 * Author : Yuri Ritvin
 */
#include <iostream>

using namespace std;
const int SIZE = 30;

void printArr(double arr[][SIZE], int num_rows, int num_cols) {
    for (int i = 0; i < num_rows; i++) {
        for (int y = 0; y < num_cols; y++) {
            cout << " " << arr[i][y];
        }
        cout << endl;
    }
}

void getArr(double arr[][SIZE], int num_rows, int num_cols) {
    /*
     * getArr
     * @arr[][SIZE] - to be filled
     * num_rows - number of rows
     * num_cols - number of cols
     * populating the arr, getting an input form user till ARR_SIZE is filled
     */
    cout << "enter number " << num_cols * num_rows << " to array " << endl;
    for (int i = 0; i < num_rows; i++) {
        for (int y = 0; y < num_cols; y++) {
            cin >> arr[i][y];
        }
    }
}

bool scopeValidator() {
    char scope[SIZE];
    char ch;
    cout << "start Entering chars" << endl;
    ch = cin.get();
    int i = 0;
    while (ch != '\n') {
        if (ch == ']' or ch == '}' or ch == ')') {
            if ((ch == ']' and scope[i - 1] == '[') or
                (ch == '}' and scope[i - 1] == '{') or
                (ch == ')' and scope[i - 1] == '(')) {
                scope[i - 1] = NULL;
                i--;
            } else {
                return false;
            }
        } else if (ch == ' ') {
            // empty
        } else {
            scope[i] = ch;
            i++;
        }
        ch = cin.get();
    }
    return true;
}

int main() {
    if (scopeValidator())
        cout << "Scope Valid" << endl;
    else
        cout << "Error Your Socpe was invalid";
    return 0;
}
