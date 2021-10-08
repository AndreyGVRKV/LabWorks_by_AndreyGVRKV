#include "stdio.h"
#include "stdlib.h"
#include <math.h>
void main()
{
    double x=5;
    double f;
    f = (cos(x)+sin(x)+cos(3*x)+sin(3*x));
    printf ("x = %f\n",x);
    printf ("f = %5.4f\n",f);
    x=0;
    printf("Input x: ");
    scanf("%lf",&x);
    printf("x = %f\n", x);
    f = (cos(x)+sin(x)+cos(3*x)+sin(3*x));
    printf ("f = %5.4f\n",f);
    system("pause");
    return;
}