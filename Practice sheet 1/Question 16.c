//Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include <stdio.h>
int main(){
    int subj1, subj2,subj3,subj4,subj5,total;
    float average,percentage;
    total = subj1+subj2+subj3+subj4+subj5;
    average = total/5;
    percentage = (total/500)*100;
    
    printf("the total is %d, the average is %f, the percentage is %f",total,average,percentage);
     
    return 0;
}
