//Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
int main(){

    char character = "f";
    
    if((character>= 41 && character<=90) || (character>= 97 && character<122))  {
        printf("It is a character");
    }
    else {
        printf("it's Not a character");
    }
    return 0;
}
