// Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include <stdio.h>
int main() {
    int side1, side2, perimeter;
    printf("please enter your length of the rectangle");
    scanf("%d",&side1);
    printf("please enter your breadth of the rectangle");
    scanf("%d",&side2);
    perimeter = 2*(side1+side2);
    printf("The perimeter of this rectange is %d",perimeter);
    return 0;
}
