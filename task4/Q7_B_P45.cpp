/*
 * Yuri Ritvin
 * Question 7 B Page 45 15.12
 */

#include <iostream>

using namespace std;

const int BAD_SEARCH = -1;
const int ROWS = 100;
const int SIZE = 256;

int getLength(char s[]) {
    /*
     * getLength - return length of char s[]
     * return the count of i will  \0
     */
    int i = 0;
    while (s[i])
        i++;
    return i;
}

bool isPalindrome(char s[]) {
    /*
     * isPalindrome - return true if the string is polindrome else false
     * @s[] - char[] array
     * algorithm:
     *      splitting the array to half, and running from end and start, checking each element if equal to his opposite
     */
    int strLen = getLength(s);
    for (int i = 0; i < strLen / 2; i++) {
        if (s[i] != s[strLen - (1 + i)]) {
            return false;
        }
        i++;
    }
    return true;
}

void swap(char *a, char *b) {

    char temp = *a;
    *a = *b;
    *b = temp;
}

void switchLetters(char s[]) {
    int strLen = getLength(s);
    for (int i = 0; i < strLen - 1; i = i + 2) {
        swap(s[i], s[i + 1]);
    }
}

void strcpy(char *target, const char *source) {
    while (*target = *source) {
        target++;
        source++;
    }
}

void removeChar(char s[], char ch) {
    int y = 0;
    char *outChar = new char[256];
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] != ch) {
            outChar[y] = s[i];
            y++;
        }
    }
    outChar[y] = '\0';
    strcpy(s, outChar);
}

int strcmp(char s[], char needle[]) {
    int f, j, i;
    bool isMatching;
    for (i = 0; s[i] != 0; i++) {
        if (s[i] != needle[0]) {
            continue;
        }

        f = i + 1;
        j = 1;
        isMatching = true;
        while (isMatching) {
            //if this is the end of sub string@needle
            if ('\0' == needle[j])
                return i;

            if (needle[j++] != s[f++])
                break;
        }
    }
    return BAD_SEARCH;
}

int castInt(char s[]) {
    int num = 0, curr = 0;
    for (int i = 0; s[i] != 0; i++) {
        curr = s[i] - '0';
        num = num * 10 + curr;
    }
    return num;
}

void shrinkArray(char arrayLines[][SIZE], int &rows, int from) {
    int i =0;
    for (i = from; i < rows; i++) {
        strcpy(arrayLines[i], arrayLines[i + 1]);
    }

}

void removeLinesByNeedle(char arrayLines[][SIZE], int &rows, char needle[]) {
    for (int i = rows; i >= 3; i--) {
        if (strcmp(arrayLines[i], needle) != BAD_SEARCH) {
            shrinkArray(arrayLines, rows, i);
            rows = rows - 1;
        }
    }

}

void getArray(char arrayLines[ROWS][SIZE], int &rows) {
    int i = 0;
    char word[SIZE];
    cin.getline(word, 256);
    while (word[0] != 0) {
        strcpy(arrayLines[i], word);
        cin.getline(word, 256);
        i++;
    }
    rows = i;
}

void printArr(char arr[][SIZE], int rows) {
    for (int i = rows - 1; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}

int main() {
    int rows, size;
    char arrayWords[ROWS][SIZE];
    cout << "Enter Char Matrix, for End press enter" << endl;
    getArray(arrayWords, rows);

    removeChar(arrayWords[0], ' ');
    if (!isPalindrome(arrayWords[1]))
        switchLetters(arrayWords[1]);

    removeLinesByNeedle(arrayWords, rows, "new");

    cout << "the value of array[2]:" << castInt(arrayWords[2]) << endl;
    printArr(arrayWords, rows);

    return 0;
}