//Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include <stdio.h>
int main() {
    float Celsius, Fahrenheit;
    printf("please enter the temperature in celsius");
    scanf("%d",&Fahrenheit);
    Celsius = (Fahrenheit-32) /1.8 ;
    printf("the Celsius is",Celsius);

    return 0;
}
