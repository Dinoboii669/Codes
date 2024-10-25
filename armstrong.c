/* #include <stdio.h>
int main()
{
    int num,d,sum,og;
    d=sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    og=num;

    while(num>0)
    {
        d=num%10;
        sum=(d*d*d)+sum;
        num=num/10;
    }
    if (sum==og)
    {
        printf("It is an armstrong number.");

    }
    else
    {
        printf("It is not an armstrong number.");
    }
}
*/
#include <stdio.h>
int main()
{
    int num,d,sum,og,i;
    d=sum=0;
    i=1;
    og=i;

    while(i<2000)
    {
        d=i%10;
        sum=(d*d*d)+sum;
        i=i/10;
        i++;
        
        if (sum==i){
        printf("%d It is an armstrong number.\n",i);
        i++;

    }
    else
    {
        continue;
        i++;
    }
    i++;
    }
    
}