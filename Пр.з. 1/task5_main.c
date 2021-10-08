#include "stdio.h"
#include "stdlib.h"

extern double f(double x);
void main(void) 

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