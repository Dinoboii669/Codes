#include <stdio.h>
int main()
{
    float mpay, hrs, rate, weeks;
    printf("How many hours worked:\n ");
    scanf("%f",&hrs);
    printf("What is the rate ? ");
    scanf("%f",&rate);
    printf("Number of weeks ? ");
    scanf("%f",&weeks);
    mpay = hrs*rate*weeks;

    printf("The monthly pay is: \n%.3f", mpay);
    
}