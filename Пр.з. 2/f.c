#include "func.h"
#include <math.h>
double f(double x)
{
    return (x >= 1.1) ? (9-x) : (sin(3*x)/(x*x*x*x+1));
}

