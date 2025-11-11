//Write a C program to enter length in centimetre and convert it into meter and kilometre.
#include <stdio.h>
int main() {
    int cm;
    float m, km;
    printf("please enter the centimeter");
    scanf("%d",&cm);
    m = cm/100;
    km = m/1000;   
    printf("the m is %f, the km is %f",m,km);

    return 0;
}
