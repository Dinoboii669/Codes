#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,dist;
    printf("Hello, Rahul! \n");
    printf("Enter coordinates in Mumbai: ");
    scanf("%f,%f",&x1,&y1);
    printf("Enter coordinates in Delhi: ");
    scanf("%f,%f",&x2,&y2);

    dist =  sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("The distance is: %f\n", dist);
}