// write a program to count blanks, tabs and newlines.

#include<stdio.h>

int main(){
    int c;
    int blanks, tabs, newlines;
    blanks = 0;
    tabs = 0;
    newlines = 0;
    while((c=getchar()) != EOF){
        if(c == '\n'){
            newlines++;
        }
        if ( c == '\t') {
            tabs++;
        }
        if ( c == ' ') {
            blanks++;
        }
    }
    printf("\nTabs: %d\nNewlines: %d\nBlanks: %d",tabs, newlines, blanks);
    return 0;
}