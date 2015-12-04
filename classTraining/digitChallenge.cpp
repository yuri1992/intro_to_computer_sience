#include <iostream>

using namespace std;

int strLen(char string1[]) {
    int i=0;
    for (i=0; string1[i]; i++);
    return i;
}

bool strFind(char string1[],char string2[]) {
    int i,y,index=0;
    int string2length = strLen(string2);

    for (i=0;string1[i];i++) {
        if (string1[i] == string2[index]) {
            cout << string1[i] << " == " << string2[index] << endl;
            index++;
        } else {
            index=0;
        }

        if (string2length == index)
            return true;
    }
    return false;
}

int main() {

    char string1[] = "Yuri Is the Man";
    char string2[] = "Is";
    cout << strLen(string1) << endl;
    cout << strLen(string2)<< endl;
    cout << strFind(string1,string2);
}




