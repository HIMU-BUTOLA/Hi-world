#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,min = INFINITY,max = -INFINITY;
    int x1,x2;
    printf("Enter the range of x1 and x2: ");
    scanf("%d %d",&x1,&x2);
    for(x = x1 ; x < x2 ; x+=0.1)
    {
        y = pow(x,2) + 4*x + 1;
        if(y < min)
        {
            min = y;
        }
        if(y>max)
        {
            max = y;
        }
    }

    printf("Minima = %f , Maxima = %f ",min,max);
    return 0;
}