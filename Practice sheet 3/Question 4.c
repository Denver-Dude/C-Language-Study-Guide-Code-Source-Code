// Write a C program to find maximum between two numbers using switch case.
#include <stdio.h>
int main(){  
    int num1=3, num2=6 , decision;    
    if (num1<num2){
        decision=0;}
    else{
        decision=1;
    }
    switch (decision)
    {
    case 1:
        printf("%d is greater than %d",num1,num2);
        break;
    
    default:
        printf("%d is greater than %d",num2,num1);
        break;
    }
    return 0;
}




