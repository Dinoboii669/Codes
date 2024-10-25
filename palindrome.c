#include <stdio.h> 
int main()
{
    int num,rev,d,og;
    d=rev=0;
    printf("Enter number: ");
    scanf("%d",&num);
    og=num;

    while(num>0)
    {
        d=num%10;
        rev=(rev*10)+d;
        num=num/10;
    }
    printf("%d",rev);

    if(rev==og)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome.");
    }
}