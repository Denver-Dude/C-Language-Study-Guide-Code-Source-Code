// Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include <stdio.h>
int main(){

    char character = "f";
    
    if((character == 65) || (character == 69)|| (character == 73)|| (character == 79)|| (character == 85)|| (character == 97)|| (character == 101)|| (character == 105)|| (character == 111) || (character == 117))  {
        character = 0;
    }
    else {
        character = 1;
    }

    switch (character)
    {
    case 0:
        printf("it's a Vowel");
        break;
    
    default:
        printf("it's not a vowel");
        break;
    }
    return 0;
}