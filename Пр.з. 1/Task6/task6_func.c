#include "stdio.h"
#include <math.h>

double x = 5.0;
double result;

void f (void)
{
    result =  (cos(x)+sin(x)+cos(3*x)+sin(3*x));
}
