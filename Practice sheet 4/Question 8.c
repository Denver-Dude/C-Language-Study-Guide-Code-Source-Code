// Write a C program to find sum of all even numbers between 1 to n.
#include <stdio.h>
int main() {
    int number=1, number_next=2, endnumber =5 ;
    while (number <= endnumber)
    {
    if (number%2!=0)
    {
        number+= number_next;
        /* code */
    }
    
    
    number_next+=1;
    
    }
    printf("%d",number);
    
}
