// Write a C program print total number of days in a month using switch case.
#include <stdio.h>

int main() {
    int month;

    printf("Enter the month in number (1-12): ");
    scanf("%d", &month);

    if (month%2 == 0){
        if (month == 2)
        {
            month = 2;
        } else{
            month = 1;
        }       
       
    } else{
        month = 0;
    }


    switch(month) {
        case 0:
            printf("This has 31 days");
            break;
        case 1:
            printf("This has 30 days");
            break;
        case 2:
            printf("This has 29 days");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.");
    }

    return 0;
}
