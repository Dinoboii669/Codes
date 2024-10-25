#include <stdio.h>
int factorial(int);
int main()
{
    int d=0,num,fact=0;
    printf("Enter number: ");
    scanf("%d",&num);

    fact=factorial(num);
    printf("%d",fact);


}
int factorial(int num)
{
    int d=1;
    int fact=0;
    if(num>1)
    {
        while(num>=1)
        {
        fact=d*num;
        num--;
        }
    }
    else if(num==0)
    {
        fact=1;
    }
    else
    printf("invalid");
    return fact;
}