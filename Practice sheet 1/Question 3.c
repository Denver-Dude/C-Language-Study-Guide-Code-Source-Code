// Write a C program to enter two numbers and perform all arithmetic operations.
#include <stdio.h>
int main() {
    int num1, num2, sum;
    printf("please enter your first digit");
    scanf("%d",&num1);
    printf("please enter your second digit");
    scanf("%d",&num2);
    printf("The sum is %d",num1+num2);
    printf("The products are %d",num1*num2);
    printf("The difference is %d",num1-num2);
    printf("The divided value is %d",num1/num2);

    return 0;
}
