// rewrite the temperature conversion program of section 1.2 to use a function for conversion.
#include<stdio.h>
float c_to_f(float celsius){
    float c, f;
    f = (c * 9/5) + 32;
    return f;
}

int main() {
    printf("%.2f", c_to_f(0.0));
    return 0;
}