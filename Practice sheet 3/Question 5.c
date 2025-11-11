// Write a C program to check whether a number is even or odd using switch case.
#include <stdio.h>
int main(){  
    int num1=3, decision;    
    if (num1%2 == 0){
        decision=0;}
    else{
        decision=1;
    }
    switch (decision)
    {
    case 1:
        printf("%d is greater than %d",num1);
        break;
    
    default:
        printf("%d is greater than %d",num1);
        break;
    }
    return 0;
}




