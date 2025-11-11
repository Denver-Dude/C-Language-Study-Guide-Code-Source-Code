// Write a C program to count number of digits in a number.
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
    
    printf("First digit of the entered number is: %d \n", firstDigit);
    printf("Last digit of the entered number is: %d", lastDigit);
    
    return 0;
}