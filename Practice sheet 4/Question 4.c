// Write a C program to print all even numbers between 1 to 100. - using while loop
#include <stdio.h>
int main() {
    int number=1;
    while (number <= 100)
    {
    
    if (number%2 == 0)
    {
        printf("%d",number);
    }
    number++;
    }
    
}
