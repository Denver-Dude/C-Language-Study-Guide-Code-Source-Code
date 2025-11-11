//Write a C program to calculate area of an equilateral triangle.
#include <stdio.h>
int main(){
    float side=5.5,area;
    area = (pow(3,0.5)/4)*(pow(side,2));
    
    printf("the area is %f",area);
     
    return 0;
}
