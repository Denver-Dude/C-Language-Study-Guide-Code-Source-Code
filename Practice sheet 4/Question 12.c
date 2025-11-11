// Write a C program to find sum of first and last digit of a number.
#include <stdio.h>
int main(){
    int num, firstDigit, lastDigit;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }
    
    printf("The sum of first and last digit is: %d \n", firstDigit+lastDigit);   
    return 0;
}