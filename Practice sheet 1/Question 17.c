//17.Write a C program to enter P, T, R and calculate Simple Interest.
#include <stdio.h>
int main(){
    int principal=500, time=2, rate=3, SI;
    SI = (principal*time*rate)/100;
    printf("the total simple interest is %d",SI);
     
    return 0;
}
