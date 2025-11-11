#include <stdio.h>

int main() {
    long num;
    int digit, divisor = 1;

    printf("Enter any number: ");
    scanf("%ld", &num);

    long temp = num;

    
    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    printf("In words: ");

   
    while (divisor > 0) {
        digit = num / divisor;
        num = num % divisor;
        divisor = divisor / 10;

        switch (digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }
    }
    return 0;
}
