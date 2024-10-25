#include <stdio.h>
int main()
{
    int n500,n100,n50,n20,n10,c5,c2,c1,amt;

    n500=n100=n50=n20=n10=c5=c2=c1=0;

    printf("Enter amount: ");
    scanf("%d",&amt);
    
    if(amt>=500)
    {
        n500=amt/500;
        amt=amt-n500*500;
    }
    if(amt>=100)
    {
        n100=amt/100;
        amt=amt-n100*100;
    }
    if(amt>=50)
    {
        n50=amt/50;
        amt=amt-n50*50;
    }
    if(amt>=10)
    {
        n10=amt/10;
        amt=amt-n10*10;
    }
    if(amt>=5)
    {
        c5=amt/5;
        amt=amt-c5*5;
    }
    if(amt>=2)
    {
        c2=amt/2;
        amt=amt-c2*2;
    }
    if(amt>=500)
    {
        n500=amt/500;
        amt=amt-n500*500;
    }
    if(amt>=1)
    {
        c1=amt/1;
        amt=amt-c1*1;
    }

    printf("Number of 500 are %d\n",n500);
    printf("Number of 100 are %d\n",n100);
    printf("Number of 50 are %d\n",n50);
    printf("Number of 20 are %d\n",n20);
    printf("Number of 10 are %d\n",n10);
    printf("Number of 5 are %d\n",c5);
    printf("Number of 2 are %d\n",c2);
    printf("Number of 1 are %d\n",c1);

}