// Modify the temperature conversion program to print the table in reverse order, that
// is,, from 300 degrees to 0.

#include<stdio.h>

int main(){
    float celsius, farh;
    int lower, higher, step;
    lower = 0;
    higher = 300;
    step = 20;
    for (  farh = higher; farh >= lower; farh = farh - step){
        celsius = (5.0/9.0)*(farh - 32);
        printf("%.1f\t%.1f\n", farh, celsius);
    }
    return 0;
}