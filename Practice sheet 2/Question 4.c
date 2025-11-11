#include <stdio.h>
int main(){    
    // Declaration
    int num1;    
    // Value inputed
    printf("Enter first value :");
    scanf("%d",&num1);    
    // Nested If
    if (num1%5==0 && num1%11==0) {
        printf("Number is both divisable by 5 and 11");
        }else{
        printf("no, it doesnt work");
    }    
    return 0;
}
