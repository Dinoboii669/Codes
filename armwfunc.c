#include <stdio.h>
int armstrong(int);
int main()
{
    int num,sum;
    printf("Enter number: ");
    scanf("%d",&num);
    ;

    sum=armstrong(num);

    if (sum==num)
    {
        printf("It is an armstrong number.");

    }
    else
    {
        printf("It is not an armstrong number.");
    }
}
int armstrong(int num)
{
    int d,sum=0;
    while(num>0)
    {
        d=num%10;
        sum=(d*d*d)+sum;
        num=num/10;
    }
    return sum;
}