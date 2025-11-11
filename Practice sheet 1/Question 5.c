//Write a C program to enter length and breadth of a rectangle and find its area.
#include <stdio.h>
int main() {
    int side1, side2, area;
    printf("please enter your length of the rectangle");
    scanf("%d",&side1);
    printf("please enter your breadth of the rectangle");
    scanf("%d",&side2);
    area = side1*side2;
    printf("The area of this rectange is %d",area);
    return 0;
}
