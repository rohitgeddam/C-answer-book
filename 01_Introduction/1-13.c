// write a program to print a histogram of the lengths of words in its input.

#include<stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c, state;

    state = OUT;
    while ((c=getchar()) != EOF) {
        if ( c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else {
            state = IN;
        }
    }
    return 0;
}