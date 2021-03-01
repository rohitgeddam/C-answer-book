// modify the temperature conversion program to print a heading above the table.

#include<stdio.h>
/*
    print fahrenheit-celsius table
    for fahr = 0, 20, ..., 300 
*/
int main(){

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("---Welcome---\n");
    while ( fahr <= upper ) {
        celsius = 5.0 * (fahr-32) / 9;
        printf("%10.1f\t%.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;

}
// 4.1f means 
// 21.045 will be 
// __21.0