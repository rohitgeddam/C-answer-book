// Write a program to print the corresponding celsius to fahrenheit table

#include<stdio.h>

int main(){
    float celsius, fahr;
    int lower, higher, step;

    lower = 0;
    higher = 300;
    step = 20;

    celsius = lower;
    printf("Celsius\t Fahrenheit\n");
    while (celsius <= higher){
        fahr = (9.0/5.0)*(celsius + 32);
        printf("%.2f\t%.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}