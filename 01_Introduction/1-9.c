// write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include<stdio.h>

int main(){

    int c;
    int NON_BLANK = 'a';
    int lastc;

    lastc = NON_BLANK;
    while((c=getchar()) != EOF) {
        if ( c != ' ') {
            putchar(c);
        } else {
            if ( lastc != ' ') {
                putchar(c);
            }
        }

        lastc = c;
    }
    return 0;
}