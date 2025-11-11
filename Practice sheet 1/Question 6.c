//Write a C program to enter radius of a circle and find its diameter, circumference, and area.
#include <stdio.h>
int main() {
    int radius, diameter;
    float circumference, area;
    printf("please enter the radius");
    scanf("%d",&radius);
    diameter = radius*2;
    circumference = 2*(22/7)*radius;
    radius = (22/7)*pow(radius,2);
    printf("the diameter is %d, the circumference is %f, the radius is %f",diameter,circumference,radius);

    return 0;
}
