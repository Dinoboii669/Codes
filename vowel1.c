#include<stdio.h>
#include<ctype.h>
int main()
{
    char a; 
    printf("Enter an alphabet: \n");
    scanf("%s",&a);
    a = toupper(a);

    switch(a)
    {
        case 'A':
        printf("It is a vowel. \n");
        break;
        

        case 'E':
        printf("It is a vowel. \n");
        break;
        

        case 'I':
        printf("It is a vowel. \n");
        break;

        case 'O':
        printf("It is a vowel. \n");
        break;
        

        case 'U':
        printf("It is a vowel. \n");
        break;

        default:
        printf("Only consonants. ");

    }
}