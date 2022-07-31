#include <iostream>
// FINAL PROJECT FOR EDX COURSE C PROGRAMMING: MODULAR PROGRAMMING AND MEMORY MANAGEMENT
// Converted to C++
/*
 Write a function isReverse() that checks whether a given word is the reverse of another given word. More precisely, the function should take as inputs two words (null-terminated arrays of characters) and return an integer. If indeed the second word is the reverse of the first then the function should return the integer 1, otherwise it should return a 0.

 Your main() function should read two words from the user input (you can assume that neither word has more than 99 characters) and then call the function isReverse, passing both words to this function. The function should return an integer as described above and your main program needs to print out a sentence, indicating whether indeed, the first word is the reverse of the second word (see below examples).

 Note: The name of the function needs to be isReverse.

 Here are two sample runs:

 Input:

 stressed
 desserts

 Output:

 stressed is the reverse of desserts

  

 Input:

 apple
 banana

 Output:

 apple is not the reverse of banana
 */
 
using namespace std;

int isReverse(char *, char *);

int main(void) {
    char a[100];
    char b[100];
    char c[100];
    int result = 0;
    int i = 0;

    cin >> a;
    cin >> b;

    while ( *(a + i) != '\0') {
        *(c + i) = *(a + i);
        i = i + 1;
    }
    result = isReverse(c, b);
    if (result == 0) {
        cout << a << " is the reverse of " << b << endl;
    } else {
        cout << a << " is not the reverse of " << b << endl;
    }
    return 0;
}

int isReverse(char *x, char *y) {
        int l = 0;
        char tmp;
        int i;
        int j;
        int returnVal = 0;
        while ( *(x + l) != '\0') {
                l = l + 1;
        }

        j = l - 1;

        for (i = 0; i < ((l - 1) / 2); i++) {
                tmp = *(x + i);
                *(x + i) = *(x + j);
                *(x + j) = tmp;
                j = j - 1;
        }

        for (i = 0; i < (l - 1); i++) {
                if ( *(x + i) != *(y + i) ) {
                        returnVal = 1;
                        break;
                }
        }

        if (returnVal == 0) {
                return 0;
        } else {
                return 1;
        }

}
