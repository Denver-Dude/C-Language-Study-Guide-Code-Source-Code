//Write a C program to calculate factorial of a number.
#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    int sum = 0;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  // assume i is prime

        // check divisibility
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime == 1)
            sum += i; // add prime number to sum
    }

    printf("Sum of all prime numbers between 1 and %d = %d\n", n, sum);

    return 0;
}

