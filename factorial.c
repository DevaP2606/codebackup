#include <stdio.h>

int main(){
    int a,b,i;
    printf("Enter any number");
    scanf("%d",&a);
    b=1;
    for ( i = a; i>=1; i--)
    {
        b=b*i;
    }
     printf("The Factorial is %d",b);
      
    return 0;
}