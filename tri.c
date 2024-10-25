#include <stdio.h>
int main()
{
    int a,b,c;
    a=b=c=0;

    printf("Type: ");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a==b && b==c)
    printf("equilateral. ");
    
    else if(a==b || b==c || c==a)
    printf("isoscales.");

    else 
    printf("scalene");

}