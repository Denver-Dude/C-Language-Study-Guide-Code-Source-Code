//Write a C program to calculate factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter any positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}