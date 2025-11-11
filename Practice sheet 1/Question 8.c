//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include <stdio.h>
int main() {
    float Celsius, Fahrenheit;
    printf("please enter the temperature in celsius");
    scanf("%d",&Celsius);
    Fahrenheit = (Celsius * 1.8) + 32 ;
    printf("the Fahrenheit is",Fahrenheit);

    return 0;
}
