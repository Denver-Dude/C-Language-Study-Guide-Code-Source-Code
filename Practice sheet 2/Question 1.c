// Write a C program to perform input/output of all basic data types.
#include <stdio.h>
int main() {
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    char strVar[100];

    printf("Enter an integer: ");
    scanf("%d", &intVar);

    printf("Enter a float: ");
    scanf("%f", &floatVar);

    printf("Enter a double: ");
    scanf("%lf", &doubleVar);

    printf("Enter a character: ");
    scanf("%c", &charVar);

    printf("Enter a string (no spaces): ");
    scanf("%s", strVar);

    printf("\nYour Values were:\n");
    printf("Integer: %d\n", intVar);
    printf("Float: %.2f\n", floatVar);
    printf("Double: %.4lf\n", doubleVar);
    printf("Character: %c\n", charVar);
    printf("String: %s\n", strVar);
    
    return 0;
}
