#include <stdio.h>
#include <ctype.h>
int main()
{
    char op; 
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f,%f",&a,&b);
    printf("What operation would you like to do? ");
    scanf("%s", &op);

    if (op == '+')
    {
        printf("%f", a+b);
    }
    else if (op == '-')
    {
        printf("%f", a-b);
    }
    else if (op = '*')
    {
        printf("%f", a*b);
    }
    else if (op == '/')
    {
        printf("%f", a/b);
    }
    else 
    {
        printf("Invalid operator\n");
    }

}