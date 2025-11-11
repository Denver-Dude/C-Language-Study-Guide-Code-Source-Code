// Write a C program to find sum of all natural numbers between 1 to n.
#include <stdio.h>
int main() {
    int number=1, number_next=2, endnumber =5 ;
    while (number <= endnumber)
    {
    number+= number_next;
    number_next+=1;
    
    }
    printf("%d",number);
    
}
