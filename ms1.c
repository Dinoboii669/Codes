#include <stdio.h> //CODING MISTAKES DONE IN MIDSEM1
#include <math.h>
int main()
{
    long int num,num1,num2,ogsum;
    double count=0;
    printf("Enter number: ");
    scanf("%ld",&num);
    ogsum = num%10;

    while(num>=10)
    {
        
        num=num/10;
      
    }
    num2=num;
    printf("%ld",ogsum+num2);

}