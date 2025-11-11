//Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>
int main(){

    char character = "f";
    
    if((character == 65) || (character == 69)|| (character == 73)|| (character == 79)|| (character == 85)|| (character == 97)|| (character == 101)|| (character == 105)|| (character == 111) || (character == 117))  {
        printf("It is a vowel");
    }
    else {
        printf("it's Not a vowel");
    }
    return 0;
}
