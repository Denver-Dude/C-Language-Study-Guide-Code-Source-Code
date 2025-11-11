#include <stdio.h>
int main(){
    int a = 30 , b = 40;
    char opr;
    printf("enter the character");
    scanf("%c",&opr);
    switch (opr)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;    
    case '%':
        printf("%d",a%b);
        break;
   
    default:
        printf("character not reconginzed");
        break;
    }


    return 0;
}




