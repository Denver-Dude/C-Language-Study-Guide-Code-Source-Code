// Write a C program to print all odd number between 1 to 100.
#include <stdio.h>
int main() {
    int number=1;
    while (number <= 100)
    {
    
    if (number%2 != 0)
    {
        printf("%d",number);
    }
    number++;
    }
    
}
