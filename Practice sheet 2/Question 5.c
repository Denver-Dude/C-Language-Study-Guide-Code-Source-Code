//5.Write a C program to check whether a number is even or odd.
#include <stdio.h>
int main(){


    int number = 20;
    if(number == 0){
        printf("Mathematical Error");
    }
    else if (number%2 == 0) {
        printf("this is even");
    }
    else {
        printf("it's Odd");
    }
    return 0;
}
