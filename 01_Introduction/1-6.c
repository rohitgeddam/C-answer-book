// Verify that the expression getchar() != EOF is 0 or 1;

#include<stdio.h>

int main(){
    int c = getchar() != EOF;
    if (c == 0) {
        printf("c is 0");

    } else {
        printf("c is %d", c);
    }
    return 0;
}
// getchar() != EOF is 1