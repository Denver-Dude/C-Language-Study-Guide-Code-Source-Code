//Write a C program to enter P, T, R and calculate Compound Interest.
#include <stdio.h>
int main(){
    int principal=500, time=2, rate=3, CI;
    CI = pow(principal*(1 + rate/100),time)-principal;
    printf("the total compound interest is %d",CI);
     
    return 0;
}
