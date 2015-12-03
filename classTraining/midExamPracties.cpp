/*
 * Author : Yuri Ritvin
 */
#include <iostream>
#include <math.h>

using namespace std;

void printVar(int a, int b){
    cout << "a " << a << endl;
    cout << "b " << b << endl;
}

int main() {
    int a1 = 1;
    int a = 5;
    int b = (a++ - ++a);
    //a1 *= ++b;
    //cout << "a1 " << a1 << endl;
    printVar(a,b);
}