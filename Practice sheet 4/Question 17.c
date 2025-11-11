//Write a C program to print all ASCII character with their values.
#include <stdio.h>
int main() {
    int number=1, number_next=1 ;

    
    for ( number_next = 0; number_next < 11; number_next++)
    {
    printf("%d raised to %d is %d",number,number_next,pow(number,number_next));     

    }
    return 0 ;
}
