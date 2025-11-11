#include <stdio.h>
int main(){
    int a = 30 , b = 40, c=23 , d, decision;
    d = b*b - 4*a*c;
    if (d<0)
    {
        decision=0;
    }
    else if (d==0)
    {
        decision=1;
    }
    else
    {
        decision=2;
    }
    
    switch (decision)
    {
    case 0:
        printf("Real and distinct");
        break;
    case 1:
        printf("Real and equal");
        break;
    
    default:
        printf("Imaginary / complex");
        break;
    }
    
    

    return 0;
}




