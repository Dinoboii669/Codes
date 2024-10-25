#include <stdio.h>
int main()
{
    int x,y;
    char op;
    
    printf("What do you wanna do: \n");
    scanf(" %s",&op);
    printf("Enter two numbers: \n");
    scanf("%d",&x);
    printf("Enter second number: \n");
    scanf("%d",&y);
    

    if(op =='add')
    {
        printf("output is, %d", x+y);

    }
    else if(op =='sub')
    {
        printf("Output is, %d", x-y);
    }
    else if(op =='*')
    printf("%d",x*y);
    else if(op =='/')
    printf("%d",x/y);
    else 
    printf("invalid");

    return 0;
}