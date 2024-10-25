/*#include <stdio.h>
int main()
{
    double prices[]={12.0, 13.0, 14.0, 15.0};
    for(int i=0; i<sizeof(prices)/sizeof(prices[0]); i++) //sizeof prices will give 8*4=32bytes and dividing with each (8bytes) will give number of elements
    {
        printf("%0.2lf,",prices[i]);
    }
}*/
#include <stdio.h>
int main()
{
    double prices[2][4];
    prices[0][0]=1;
    prices[0][1]=2;
    prices[0][2]=3;
    prices[0][3]=4;
    prices[1][0]=5;
    prices[1][1]=6;
    prices[1][2]=7;
    prices[1][3]=8;

    int rows=sizeof(prices)/sizeof(prices[0]);
    int columns=sizeof(prices[0])/sizeof(prices[0][0]);
    printf("%d\n",rows);
    printf("%d\n", columns);

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d\t", prices[i][j]);
        }
    }
    printf("%d", sizeof(prices));
}
