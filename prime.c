#include <stdio.h>
int main()
{
    int n,i,count,c;
    printf("Enter your range: ");
    scanf("%d",&n);

    for(count=2; count<=n;)
    {
        for(c=2; c<i - 1; c++)
        {
            if(i%c==0)
            break;
        }
        if(c==1)
        {
            printf("%d",i);
            count++;

        }
        i++;
    }
    return 0;
}