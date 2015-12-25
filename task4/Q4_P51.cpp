/*
 * Yuri Ritvin
 * Question 4 Page 51 15.12
 * find all occurs of str inside text
 */

#include <iostream>
#include <string.h>

using namespace std;
const int SIZE = 256;

int length(char *s) {
    int i = 0;
    while (s[i++]);
    return i;
}


int *findOccur(char *text, char *str, int &size) {
    /*
     * find Occur
     * @*text - pointer to string
     * @*str - pointer to sting
     * @&size - reference to int
     *
     * iterate over @*text, finding all the occurs of *str.
     * create an new array with fixed size to have all occurs
     * iterate again and saving all indexes
     */
    int occurs = 0, i = 0;

    char *pt = strstr(text + i, str);
    i += pt - text;

    while (pt - text > 0 && length(text) > i) {
        occurs++;
        i += pt - text;
        pt = strstr(text + i, str);
    }

    size = occurs;
    int *out = new int[occurs];

    occurs = 0;
    i = 0;

    pt = strstr(text + i, str);
    i += pt - text;
    while (pt - text > 0 && length(text) > i) {
        out[occurs] = int(pt - text);
        occurs++;
        i += pt - text;

        pt = strstr(text + i, str);
    }

    return out;
}


void printArr(int *arr, const int arrSize) {
    /*
     * Priting array arr[]
     */
    for (int y = 0; y < arrSize; y++) {
        cout << arr[y] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    char text[SIZE], str[SIZE];
    cout << "Enter Text Paramter " << endl;
    cin.getline(text, SIZE);
    cout << "Enter Str Paramter (needle) " << endl;
    cin.getline(str, SIZE);

    int *arr = findOccur(text, str, size);

    cout << size << endl;

    printArr(arr, size);

    return 0;
}