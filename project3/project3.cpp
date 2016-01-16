/*
 * Yuri Ritvin
 * Project 3
 */

#include <iostream>
#include <string.h>

using namespace std;

const int BOOK_NAME = 20;
const int AUTHOR = 20;
bool MAX_BOOKS_SET = false;

typedef struct book {
    char name[BOOK_NAME];
    char author[AUTHOR];
    int numCopies;
    double price;
} BOOK;

typedef struct booklist {
    BOOK *ptr;
    int numBooks;
} BOOKLIST;


void setMaxBooks(int &maxBooks);

int lower(char first);

void toLowerStr(char *str);

void purchaseBook(BOOKLIST books[], int maxBooks);

void lexicographicOrder(BOOK *list, int size);

void printAll(BOOKLIST books[]);

void printSortedBooks(BOOKLIST books[], char first);

int numCopies(BOOKLIST books[], char first);

void printBooks(BOOKLIST books[], char first);

void cheapest(BOOKLIST books[]);

void removeBookCopy(BOOKLIST books[], char* author, char* bookName);

int main() {
    int choice;  // for menu

    int res;     // returned value from user function
    double dres;  // returned value from user function
    bool boolres; // returned boolean value from user function

    char dummy;
    char firstLet;
    char bookN[BOOK_NAME];
    char authorN[AUTHOR];

    BOOKLIST books[26];
    int maxBooks = 0;
    cout << "Press 1 for section 1\n";
    cout << "Press 2 for sections 1 and 2\n";
    cout << "Press 3 for sections 1-3\n";
    cout << "Press 4 for sections 1, 2, and 4\n";
    cout << "Press 5 for sections 1, 2, and 5\n";
    cout << "Press 6 for sections 1, 2, and 6\n";
    cout << "Press 7 for sections 1, 2, and 7\n";

    cin >> choice;

    switch (choice) {
        case 1:
            for (int i = 1; i < 3; i++) {
                setMaxBooks(maxBooks);
            }
            break;
        case 2:
            setMaxBooks(maxBooks);
            dummy = cin.get();
            for (int i = 0; i < 26; i++) {
                books[i].ptr = new BOOK[maxBooks];
                books[i].numBooks = 0;
            }

            for (int i = 0; i < 5; i++) { // purchase 5 books
                purchaseBook(books, maxBooks);
            }

            for (int i = 0; i < 26; i++) {
                res = numCopies(books, (char) ('a' + i));
                cout << "Total number of book copies of authors with first letter '" << (char) ('a' + i) << "' is " <<
                res << endl;
            }
            break;
        case 3:
            setMaxBooks(maxBooks);
            dummy = cin.get();
            for (int i = 0; i < 26; i++) {
                books[i].ptr = new BOOK[maxBooks];
                books[i].numBooks = 0;
            }

            for (int i = 0; i < 7; i++) { // purchase 7 books
                purchaseBook(books, maxBooks);
            }
            for (int i = 0; i < 3; i++) {
                cout << "Enter a letter:\n";
                cin >> firstLet;
                printBooks(books, firstLet);
            }
            break;
        case 4:
            setMaxBooks(maxBooks);
            dummy = cin.get();

            for (int i = 0; i < 26; i++) {
                books[i].ptr = new BOOK[maxBooks];
                books[i].numBooks = 0;
            }

            for (int i = 0; i < 7; i++) { // purchase 7 books
                purchaseBook(books, maxBooks);
            }

            for (int i = 0; i < 3; i++) {
                cout << "Enter a letter:\n";
                cin >> firstLet;
                printSortedBooks(books, firstLet);
            }

            break;
        case 5:
            setMaxBooks(maxBooks);
            dummy = cin.get();

            for (int i = 0; i < 26; i++) {
                books[i].ptr = new BOOK[maxBooks];
                books[i].numBooks = 0;
            }

            for (int i = 0; i < 7; i++) { // purchase 7 books
                purchaseBook(books, maxBooks);
            }

            printAll(books);

            break;
        case 6:
            setMaxBooks(maxBooks);
            dummy = cin.get();
            for (int i = 0; i < 26; i++){
                books[i].ptr = new BOOK[maxBooks];
                books[i].numBooks = 0;
            }

            for (int i = 0; i < 7; i++){ // purchase 7 books
                purchaseBook(books, maxBooks);
            }

            cheapest(books);
            break;
        case 7:
            setMaxBooks(maxBooks);
            dummy = cin.get();
            for (int i = 0; i < 26; i++){
                books[i].ptr = new BOOK[maxBooks];
                books[i].numBooks = 0;
            }

            for (int i = 0; i < 7; i++){ // purchase 7 books
                purchaseBook(books, maxBooks);
            }

            for (int i = 0; i < 3; i++)
            {
                cout << "Enter author name:\n";
                cin.getline(authorN, AUTHOR);
                cout << "Enter book name:\n";
                cin.getline(bookN, BOOK_NAME);

                removeBookCopy(books, authorN, bookN);
            }

            break;
        default:
            cout << "Good bye\n";
            break;
    }
}

void setMaxBooks(int &maxBooks) {
    /*
     * setMaxBooks - setting @maxBooks to valid number
     *               using global MAX_BOOKS_SET as a flag
     * @&maxBooks - int by reference
     */
    cout << "Please type max num of books" << endl;
    if (!MAX_BOOKS_SET) {
        cin >> maxBooks;
        MAX_BOOKS_SET = true;
    } else {
        cout << "Already set, no change" << endl;
    }
}

int lower(char first) {
    /*
     * lower - return the ascii value of lower @first
     * @first - char in range of A-z
     */
    int ind = first - 'A';
    if (first > 'Z') {
        ind -= 32;
    }
    return ind;
}

void toLowerStr(char *str) {
    /*
     * toLowerStr - return the @*str to lower case string
     * @*str - pointer to the first char of string
     */
    int i = 0;
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }
}


void purchaseBook(BOOKLIST books[], int maxBooks) {
    /*
     * purchaseBook - implement the logic of purchasing book
     * @books[] - BOOKLIST array
     * @maxBooks - maximum books per letter
     */
    int copies = 0, price = 0,ind;
    bool isFound = false;
    char *author = new char[AUTHOR];
    char *bookName = new char[BOOK_NAME];

    cout << "Please provide author name" << endl;
    cin.getline(author, AUTHOR);
    toLowerStr(author);

    ind = lower(author[0]);
    if (books[ind].numBooks == maxBooks) {
        cout << "Enough books in the letter '" << author[0] << "' have been purchased" << endl;
        return;
    }

    cout << "Please provide book name" << endl;
    cin.getline(bookName, BOOK_NAME);
    toLowerStr(bookName);


    for (int i = 0; i < books[ind].numBooks; i++) {
        if (strcmp(books[ind].ptr[i].name, bookName) == 0 and
            strcmp(books[ind].ptr[i].author, author) == 0) {
            cout << "Please provide number of copies" << endl;
            cin >> copies;
            books[ind].ptr[i].numCopies = books[ind].ptr[i].numCopies + copies;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        BOOK newBook;
        cout << "Please provide number of copies" << endl;
        cin >> copies;
        cout << "Please provide price of book" << endl;
        cin >> price;
        strcpy(newBook.name, bookName);
        strcpy(newBook.author, author);
        newBook.numCopies = copies;
        newBook.price = price;
        books[ind].ptr[books[ind].numBooks] = newBook;
        books[ind].numBooks = books[ind].numBooks + 1;
    }
    cin.get();
}

void lexicographicOrder(BOOK *list, int size) {
    /*
     * implement an lexicographic sort by using (bublesort algo)
     * @*list - list of BOOK elements to be sorted
     * @size - size of books in @*list
     */
    BOOK temp;
    bool swap = true;
    while (swap) {
        swap = false;
        for (int i = 0; i < size - 1; i++) {
            if (strcmp(list[i].name, list[i + 1].name) > 0) {
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                swap = true;
            }
        }
    }
}

void printAll(BOOKLIST books[]) {
    /*
     * printing all books by alphabet
     */
    for (int i = 0; i < 26; i++) {
        if (books[i].numBooks == 0) {
            cout << "No books of authors with first letter " << char(i + 97) << "'" << endl;
        } else {
            cout << "Books of authors with first letter '" << char(i + 97) << "':" << endl;
        }

        for (int y = 0; y < books[i].numBooks; y++) {
            cout << books[i].ptr[y].name << endl;
        }
    }
}

void printSortedBooks(BOOKLIST books[], char first) {
    /*
     * printSortedBooks - printing all books by lexicographic order
     * @books - array of BOOK
     * @first - author first letter to be print
     */
    int ind = lower(first);
    BOOK *sorted = new BOOK[books[ind].numBooks];

    if (books[ind].numBooks == 0) {
        cout << "No books of authors with first letter " << first << "'" << endl;
    } else {
        cout << "Sorted books of authors with first letter '" << first << "':" << endl;
    }

    // copy
    for (int i = 0; i < books[ind].numBooks; i++) {
        sorted[i] = books[ind].ptr[i];
    }
    //lexograpical order
    lexicographicOrder(sorted, books[ind].numBooks);

    for (int i = 0; i < books[ind].numBooks; i++) {
        cout << sorted[i].name << endl;
    }
}

int numCopies(BOOKLIST books[], char first) {
    /*
     * return the number of copies of books in first author letter
     * @books - array of BOOK
     * @first - first letter of the author name
     */
    int ind = lower(first), sum = 0;
    for (int i = 0; i < books[ind].numBooks; i++) {
        sum += books[ind].ptr[i].numCopies;
    }
    return sum;
}

void printBooks(BOOKLIST books[], char first) {
    /*
     * printBooks - printing all books. by first author name
     */
    int ind = lower(first);

    if (books[ind].numBooks == 0) {
        cout << "No books of authors with first letter " << first << "'" << endl;
    } else {
        cout << "Books of authors with first letter '" << first << "':" << endl;
    }
    for (int i = 0; i < books[ind].numBooks; i++) {
        cout << books[ind].ptr[i].name << endl;
    }
}

void cheapest(BOOKLIST books[]) {
    int minPrice = 1001;
    char *name = new char[BOOK_NAME];
    for (int i = 0; i < 26; i++) {
        if (books[i].numBooks != 0) {
            for (int y = 0; y < books[i].numBooks; y++) {
                if (books[i].ptr[y].price < minPrice) {
                    minPrice = books[i].ptr[y].price;
                    strcpy(name,books[i].ptr[y].name);
                }
            }
        }
    }
    cout << "cheapest: " << name << endl;
    cout << "price:: " << minPrice << endl;
}

void removeBookCopy(BOOKLIST books[], char* author, char* bookName) {
    /*
     * implement removeBookCopy logic
     * @books - books array
     * @*author - author name to be removed
     * @*bookName - book name to be removed
     */
    int ind = lower(author[0]);
    int copiesToPrint = 0;
    // normalize the input
    char firstLetter = author[0];
    toLowerStr(author);
    toLowerStr(bookName);

    if (books[ind].numBooks != 0) {
        for (int i = 0; i < books[ind].numBooks; i++) {
            if (strcmp(books[ind].ptr[i].author, author) == 0 and
                strcmp(books[ind].ptr[i].name, bookName) == 0) {
                if (books[ind].ptr[i].numCopies == 1) {
                    //shrink the array
                    for (int y=i+1;y < books[ind].numBooks; y++) {
                        books[ind].ptr[i-1] = books[ind].ptr[i];
                    }
                    books[ind].numBooks--;
                    copiesToPrint = 0;
                } else {
                    books[ind].ptr[i].numCopies--;
                    copiesToPrint = books[ind].ptr[i].numCopies;
                }

                cout << "Num of books with authors with first letter '" << firstLetter <<
                        "' is " << books[ind].numBooks << endl;
                cout << "Num of copies of the book '" << bookName <<
                "' is " << copiesToPrint << endl;
                break;
            }
        }
    }
}