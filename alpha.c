#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    printf("Enter: ");
    scanf("%s",&a);
    a=tolower(a);

    if (a>='a'&& a<='z')
    {
        printf("It is an alphabet \n");
    }
    else 
    {
    printf("not an alphabet");
    }

}