#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%s",&a);
    if (a>='a' && a<='z')
    {
        printf("It is lowercase");
    }
    else 
    {
        printf("It is uppercase");
    }

}