#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter A,B and C value: ");
    scanf("%f %f %f",&a,&b,&c);
    d = b*b-(4*a*c);
    printf("The discriminant value is: %f\n", d);

}
