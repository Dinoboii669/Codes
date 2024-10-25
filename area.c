#include <stdio.h>
int main()
{
    int length,breadth,area;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter breadth: ");
    scanf("%d",&breadth);
    area = length*breadth;
    printf("Area of the rectangle is,\n%d", area);
    
}