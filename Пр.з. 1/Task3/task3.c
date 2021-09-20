#include "stdio.h"
#include "stdlib.h"
#include <math.h>
double f(double x);
void main()
{
    double x=5;
    printf ("x = %f\n",x);
    printf ("f = %5.4f\n",f(x));
    
    printf("Input x: ");
    scanf("%lf",&x);
    printf("x = %f\n", x);
    printf ("f = %5.4f\n",f(x));
    system("pause");
    return;
}
double f(double x)
{
    return (cos(x)+sin(x)+cos(3*x)+sin(3*x));
}