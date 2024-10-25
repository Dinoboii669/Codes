#include <stdio.h>
int main()
{
    float w,h,bmi;
    printf("Enter weight: ");
    scanf("%f",&w);
    printf("Enter height in m: ");
    scanf("%f",&h);
    bmi= w/(h*h);
    if (bmi<=18.5)
    {
        printf("underweight");
    }
    else if(bmi>=24.5)
    {
        printf("overweight");
    }
    else 
    {
        printf("normal");
    }
}