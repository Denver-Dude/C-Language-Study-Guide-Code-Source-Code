//Write a C program to check whether a year is leap year or not.
#include <stdio.h>
int main(){


    int year = 2024;
    if(year%4 == 0){
        printf("It is a leap year");
    }
    else {
        printf("it's Not a leap year");
    }
    return 0;
}
