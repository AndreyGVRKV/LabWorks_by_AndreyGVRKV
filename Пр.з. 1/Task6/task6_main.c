#include "stdio.h"
#include "stdlib.h"
#include <math.h>

void f (void);
double x;
double result;

void main()
{
    printf ("x = %f\n",x);
    f();
    printf ("f = %5.4f\n",result);
    printf("Input x: ");
    scanf("%lf",&x);
    f();
    printf("x = %f\n", x);
    printf ("f = %5.4f\n",result);
    system("pause");
}  