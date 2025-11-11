//x.Write a C program to input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>
int main(){

    char character = "f";
    
    if((character>=65 &&character<=90) ||(character>=97 &&character<=122) )  {
        printf("It is a character");
    }
    else if ((character>=48 &&character<=57))
    {
        printf("it's a digit");
    } else{
        printf("it's a special character");
    }
    return 0;
}
