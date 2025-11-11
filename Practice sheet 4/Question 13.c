// Write a C program to swap first and last digits of a number.
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, temp, divisor = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;

    lastDigit = num % 10;
    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    firstDigit = temp;

    num = (num % divisor) / 10;
    num = lastDigit * divisor + num * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", num);

    return 0;
}
