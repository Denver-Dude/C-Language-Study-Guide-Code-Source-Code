// Write a C program to convert days into years, weeks and days.
#include <stdio.h>
int main(){


    int numberofdays = 120000;
    float  years , days, restweeks, restdays;
    years = numberofdays/365 ;
    numberofdays -= years*365;
    restweeks = numberofdays/7;
    numberofdays -= restweeks*7;
    printf("The remaining Years %f \n Remaining weeks %f \n remaining days %d",years,restweeks,numberofdays);
   
   
    return 0;
}
