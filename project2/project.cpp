#include <iostream>

using namespace std;

const int MAX_STR_LEN = 100;
const int MAX_ARR_LEN = 100;


void printBoolRes(bool flag);

void printArr(int arr[], int size);

int countOnesInBinary(int num);

bool containsSequenceOfEvens(int num);

int biggestLowPower(int x, int num);

int partSum(int num);

int sumDigits(char *str);

int readArray(int data[]);

void reorderArray(int arr[], int size, int resArr[]);

void bubbleSort(int data[], int size);

bool one2one(int arr[], int size);

void partition(int data[], int size);

void findAvgAndMedian(int sortedData[], int size, double &avg, int &median);

double findAvgInTwoArr(int sortedData1[], int sortedData2[], int size);

int findMedInTwoArr(int sortedData1[], int sortedData2[], int size);

int main() {
    int choice; // for menu

    int res; // returned value from user function
    bool boolres; // returned boolean value from user function
    int i; //index for input loops
    int num, num2;  // user input
    char strin[MAX_STR_LEN]; //user string input
    int data1[MAX_ARR_LEN], data2[MAX_ARR_LEN]; //user array of input data
    int resData[MAX_ARR_LEN]; //output array from functions
    int dataSize; //logical size of data
    double avg1, avg2, avg_all; //average results
    int median; //median results
    cout << "Press 1 for section 1\n";
    cout << "Press 2 for section 2\n";
    cout << "Press 3 for section 3\n";
    cout << "Press 4 for section 4\n";
    cout << "Press 5 for section 5\n";
    cout << "Press 6 for sections 6 and 7\n";
    cout << "Press 7 for sections 6 and 8\n";
    cout << "Press 8 for sections 6,9 and 10\n";
    cout << "Press 9 for sections 6,9,11 and 12\n";
    cout << "Press 10 for sections 6,9 and 13\n";

    cin >> choice;
    switch (choice) {
        case 1:
            for (i = 1; i <= 4; i++) {
                cin >> num;
                res = countOnesInBinary(num);
                cout << res << " ";
            }
            cout << endl;
            break;

        case 2:
            for (i = 1; i <= 4; i++) {
                cin >> num;
                boolres = containsSequenceOfEvens(num);
                printBoolRes(boolres);
            }
            cout << endl;
            break;

        case 3:
            for (i = 1; i <= 4; i++) {
                cin >> num >> num2;
                res = biggestLowPower(num, num2);
                cout << res << " ";
            }
            cout << endl;
            break;

        case 4:
            for (i = 1; i <= 4; i++) {
                cin >> num;
                res = partSum(num);
                cout << res << " ";
            }
            cout << endl;
            break;

        case 5:
            for (i = 1; i <= 2; i++) {
                cin >> strin;
                res = sumDigits(strin);
                cout << res << " ";
            }
            cout << endl;
            break;

        case 6:
            //first case even size
            dataSize = readArray(data1);
            reorderArray(data1, dataSize, resData);
            printArr(resData, dataSize);
            //second case odd size
            dataSize = readArray(data1);
            reorderArray(data1, dataSize, resData);
            printArr(resData, dataSize);
            break;

        case 7:
            for (i = 1; i <= 2; i++) {
                dataSize = readArray(data1);
                boolres = one2one(data1, dataSize);
                printBoolRes(boolres);
            }
            cout << endl;
            break;
        case 8:
            //first case: val is assumed to placed in data1[4]
            dataSize = readArray(data1);
            partition(data1, dataSize);
            bubbleSort(data1, 4);
            bubbleSort(data1 + 5, dataSize - 5);
            printArr(data1, dataSize);

            //second case: val is assumed to placed in data1[0]
            dataSize = readArray(data1);
            partition(data1, dataSize);
            bubbleSort(data1 + 1, dataSize - 1);
            printArr(data1, dataSize);

            //third case: val is assumed to placed in data1[dataSize-1]
            dataSize = readArray(data1);
            partition(data1, dataSize);
            bubbleSort(data1, dataSize - 1);
            printArr(data1, dataSize);
            break;
        case 9:
            //read and sort first array
            dataSize = readArray(data1);
            bubbleSort(data1, dataSize);
            printArr(data1, dataSize);
            //read and sort second array
            dataSize = readArray(data2);
            bubbleSort(data2, dataSize);
            printArr(data2, dataSize);
            //find median and average
            findAvgAndMedian(data1, dataSize, avg1, median);
            cout << avg1 << " " << median << endl;
            findAvgAndMedian(data2, dataSize, avg2, median);
            cout << avg2 << " " << median << endl;
            avg_all = findAvgInTwoArr(data1, data2, dataSize);
            cout << avg_all << endl;
            break;

        case 10:
            for (i = 0; i < 3; i++) {
                //read and sort first array
                dataSize = readArray(data1);
                bubbleSort(data1, dataSize);
                printArr(data1, dataSize);

                //read and sort second array
                dataSize = readArray(data2);
                bubbleSort(data2, dataSize);
                printArr(data2, dataSize);

                //find median of 2 arrays
                median = findMedInTwoArr(data1, data2, dataSize);
                cout << median << endl;
            }
            break;
    }


}


void printBoolRes(bool flag) { // This function prints true or false accoring to the value of flag

    if (flag)
        cout << "true ";
    else
        cout << "false ";
}

void printArr(int arr[],
              int size) { // This funct6ion prints the numbers contained in arr, where size is the logical size of arr
    int i; // index for loop

    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool containsSequenceOfEvens(int num) {
    /*
     * containsSquenceOfEvens
     * @num - num > 0
     * return true if there more then two even digits near by
     */
    if (num == 0 or num / 10 == 0)
        return false;

    if ((num / 10) % 10 % 2 == 0 and (num % 10) % 2 == 0) {
        return true;
    }

    return containsSequenceOfEvens(num / 10);
}

int countOnesInBinary(int num) {
    /*
     * countOnesInBinary
     * @num - >=0
     * return convert @num to base 2 (binary)
     */
    if (num == 0)
        return 0;

    return num % 2 + countOnesInBinary(num / 2);
}

int biggestLowPower(int x, int num) {
    /*
     * biggestLowPower
     * @x - > 0
     * @num - > 0
     * return the maximum power of x, that equal of less then num.
     */
    if (num == x)
        return x;
    else if (num < x)
        return 1;

    return x * biggestLowPower(x, num / x);
}

int sumDigits(char *str) {
    /*
     * sumDigits
     * @*str - char array
     * return - iterate all array and clean all non numbers chars, return int.
     */
    if (str[0] == '\0') {
        return 0;
    }
    else if (int(str[0]) >= 48 and int(str[0]) <= 57) {
        // checking if the current char value is in range of numbers ascii
        return (str[0] - '0') + sumDigits(str + 1);
    }
    return 0 + sumDigits(str + 1);
}


int partSum(int num) {
    /*
     * partSum
     * @num - >0
     * return the sum of all digits except the first digit
     */
    if (num < 10)
        return 0;
    int sum = partSum(num / 10);
    return sum + ((num / 10) % 10);
}

int readArray(int data[]) {
    /*
     * readArray
     * @data[] - empty array to be filled
     * return the size of number been entered to array, array been filled with pointers
     */
    int i, l = 0;
    cin >> i;
    while (i != -1 && l < MAX_ARR_LEN) {
        data[l++] = i;
        cin >> i;
    }
    return l;
}

void bubbleSort(int data[], int size) {
    /*
     * bubbleSort
     * @data - array to be sorted
     * @size - size of array
     * implementation of bubleSort algorithm with few improvements
     */
    int temp;
    bool swap = true;
    while (swap) {
        swap = false;
        for (int i = 0; i < size - 1; i++) {
            if (data[i] > data[i + 1]) {
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
                swap = true;
            }
        }
    }
}

void reorderArray(int arr[], int size, int resArr[]) {
    /*
     * reorderArray
     * @arr[] - array that needed to be sorted
     * @size - size of the array
     * @resArr - array of output
     * sorting arr[] by next logic, all even index will be sorted in the beging of the array
     * all odd index should be moved to the end of array by reverse sort of indexes
     */
    if (size <= 0)
        return;

    // moving the array pointer of arr by 2, and resArr by 1
    reorderArray(arr + 2, size - 2, resArr + 1);
    resArr[0] = arr[0];
    if (size != 1)
        resArr[size - 1] = arr[1];
}

bool one2one(int arr[], int size) {
    /*
     * one2one
     * @int[] - array of numbers
     * return true if there number that apear more then once. (N*N)
     */
    int i, y;
    for (i = 0; i < size; i++) {
        for (y = i + 1; y < size; y++) {
            if (arr[i] == arr[y])
                return false;
        }
    }
    return true;
}

void swap(int *a, int *b) {
    /*
     * swap - making an swap
     * @*a - pointer to a
     * @*b - pointer to b
     * helper function
     */
    int temp = *a;
    *a = *b;
    *b = temp;
}

void partition(int data[], int size) {
    /*
     * partition - sort array
     * @int data[] - array
     * @size - array size
     * sorting array by partition, taking the data[0] and sorting all numbers below and under him
     */
    int valInd = 0;
    int i, z = 0;
    bool swapped;
    for (i = 1; i < size; i++) {
        // Determine if data[0] is less then data[i]
        if (data[valInd] < data[i])
            swapped = false;
        // Searching from end for number that less then data[i]
        for (z = size - 1; z >= i; z--) {
            if (data[z] < data[valInd]) {
                swap(data[i], data[z]);
                swapped = true;
                break;
            }
        }
        // Checking no swap was needed, if true the array is sorted as we want.
        if (!swapped)
            break;
        // data[0] bigger then data[i], swap them.
        swap(data[valInd], data[i]);
        valInd = i;
    }
}

double avgArr(int arr[], int size) {
    /*
     * @arr[] - array
     * return average of the array
     */
    int sum = arr[0];
    for (int i = 1; i < size; i++) {
        sum += arr[i];
    }
    return sum / double(size);
}

int getMed(int sortedData[], int size) {
    /*
     * sortedData - sorted array
     * getMed return the median of sorted array with known size
     */
    return size % 2 == 1 ? sortedData[size / 2] : sortedData[size / 2 - 1];
}

void findAvgAndMedian(int sortedData[], int size, double &avg, int &median) {
    /*
     * calculate median and avrage is sorreted array
     */
    avg = avgArr(sortedData, size);
    median = getMed(sortedData, size);
}

double findAvgInTwoArr(int sortedData1[], int sortedData2[], int size) {
    /*
     * return the average of two sorted arrays
     */
    double avg1, avg2;
    int dummy;
    findAvgAndMedian(sortedData1, size, avg1, dummy);
    findAvgAndMedian(sortedData2, size, avg2, dummy);
    return (avg1 + avg2) / 2;
}

int getMedianBinary(int sortedArr1[], int sortedArr2[], int size) {
    /*
     * @sortedArr1 - sorted array
     * @sortedArr2 - sorted array
     * Implementation of binary search to find median number in two sorted arrays
     * the algorithm works as follow
     * 1.calculating the median of the two arrays
     * 2.if median sortedData1 > median sortedData2
     *      search sortedArr1[size/2] till m1 position
     *      or search sortedArr2[size/2] till m2 position
     *   else
     *      from m1 position to last sortedArr1 or
     *      from first sortedArr2 to position of m2
     * 3. stop condition is when sortedArr1,sortedArr2 in size of 2
     */
    int med1, med2;

    if (size <= 0)
        return -1;
    if (size == 1) {
        return sortedArr1[0];
    }

    if (size == 2) {
        if (sortedArr1[1] < sortedArr2[0] and sortedArr1[0] < sortedArr2[0])
            return sortedArr1[1];
        else if (sortedArr1[0] > sortedArr2[0])
            return sortedArr1[0];
        else if (sortedArr1[1] > sortedArr2[0])
            return sortedArr2[0];
        else
            return sortedArr2[1];
    }

    med1 = getMed(sortedArr1, size);
    med2 = getMed(sortedArr2, size);

    if (med1 < med2) {
        if (size % 2 == 0) {
            return getMedianBinary(sortedArr1 + size / 2 - 1, sortedArr2, size - size / 2 + 1);
        } else {
            return getMedianBinary(sortedArr1 + size / 2, sortedArr2, size - size / 2);
        }
    } else {
        if (size % 2 == 0) {
            return getMedianBinary(sortedArr2 + size / 2 - 1, sortedArr1, size - size / 2 + 1);
        } else {
            return getMedianBinary(sortedArr2 + size / 2, sortedArr1, size - size / 2);
        }
    }
}

int findMedInTwoArr(int sortedData1[], int sortedData2[], int size) {
    return getMedianBinary(sortedData1, sortedData2, size);
}
