#include <stdio.h>
#include <math.h>
int main(void)
{
    int x,y;
    printf("\nEnter x");
    scanf("%i",&x);
    y=pow(-1,x);
    if (y>0) {printf("\n x is even\n");}
    else { printf("\n x is odd\n");}
    return 0;
}