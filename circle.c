#include <stdio.h>
int main()
{
    float radius, area;
    printf("What is the radius: ");
    scanf("%f",&radius);
    area = 3.142857142857143*radius*radius;
    printf("Area is %f",area);
}