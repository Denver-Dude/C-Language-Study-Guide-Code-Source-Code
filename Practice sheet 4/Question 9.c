// Write a C program to print multiplication table of any number.
#include <stdio.h>
int main() {
    int number=1, number_next=1 ;
    while (number_next <= 10)
    {
    printf("%d x %d is %d",number,number_next,number*number_next);     
    number_next+=1;    
    }
    
    
}
