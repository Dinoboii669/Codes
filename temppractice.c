#include <stdio.h> 
#include <ctype.h>
int main()
{
    char unit;
    float temp;
    printf("Enter the value:");
    scanf("%f",&temp);
    printf("Is it in (c) or (f)?: ");
    scanf("%s",&unit);

    unit = toupper(unit);
    if (unit=='C')
    {
        temp = (temp*9.0/5.0)+32;
        printf("The temperature in Farenheight is: %.2f", temp);
        
    }
    else if (unit=='F')
    {
        temp = ((temp-32)*5.0)/9.0;
        printf("The temperature in Celcius is: %.2f", temp);
    }
    else 
    {
        printf("invalid unit");
    }
}