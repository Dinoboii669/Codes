#include <stdio.h>

void birthday(char name[], int x)
{
    printf("Happy birthday %s!\n", name);
    printf("you are now %d years old!\n", x);
}
int main()
{
    char name[]="bro";
    int x=20;
    birthday(name, x);
}