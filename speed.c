#include <stdio.h>
int main()
{
    float m,s,t;
    printf("Distance travelled in meters? \n");
    scanf("%f",&m);
    printf("Time taken in seconds? \n");
    scanf("%f",&t);
    s = m/t;
    printf("speed is %fm/s\n", s);

}