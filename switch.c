#include <stdio.h>
int main()
{
    char grade;
    printf("What is your grade: ");
    scanf("%s",&grade);
    switch(grade)
    {
        case 'A':
            printf("Amazing!\n");
            break;

        case 'B':
            printf("Nice nice\n");
            break;
        case'C':
            printf("Mid\n");
            break;
    }
}