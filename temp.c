#include <stdio.h> //to convert celcius to farenheight and vice versa
#include <ctype.h>
int main()
{
    char unit;
    float temp;
    printf("Is the unit in (f) or (c)?\n");
    scanf("%s",&unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("Enter the temperature: ");
        scanf("%f",&temp);
        temp = (temp*9.0/5.0)+32;
        printf("The temperature in Farenheight is: %.2f F", temp);

    }
    else if (unit == 'F')
    {
        printf("Enter the temperature: ");
        scanf("%f",&temp);
        temp = ((temp-32)*5.0)/9.0;
        printf("The temperature in celcius is: %.2f C", temp);

    }
    else
    {
    printf("Invalid scale");
    }


}