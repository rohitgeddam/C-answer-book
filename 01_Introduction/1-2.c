// Experiment to find out what happens when printf's argument string contains \c, where c is some
// characters not listed above.

#include<stdio.h>

int main(){
    printf("hello world \h");
    return 0;
}