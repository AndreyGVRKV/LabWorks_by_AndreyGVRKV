#include "stdio.h"
#include <math.h>
#include "func.h"

double x = 5;
double result;

void f (void)
{
    result =  (cos(x)+sin(x)+cos(3*x)+sin(3*x));
}
