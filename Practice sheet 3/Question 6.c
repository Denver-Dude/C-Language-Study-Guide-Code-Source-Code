// Write a C program to check whether a number is positive, negative or zero using switch case.
#include <stdio.h>
int main(){  
    int number=3, decision;    
    if (number<0){
        decision = 0;}
        
    else if (number>0)
    {
        decision = 1;}
    else{
        decision = 2;
    }
    switch (decision)
    {
    case 1:
        printf("%d is negative",number);
        break;
    case 2:
        printf("%d is positive",number);
        break;
    
    default:
        printf("%d is zero",number);
        break;
    }
    return 0;
}




