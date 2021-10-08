#include "ft.h"

int findFirstNegativeElement(double eps)
{
    int i;
    double z;

    i = 0;
    z = pow(-1, i)*((i+1)/(i*i*i+2));
    do
	{
		z = pow(-1, i)*((i+1)/(i*i*i+2));
		if (z < 0)
        {
            return (i);
        }
        i++;
	} while (fabs(z) > eps);
    return (0);
}
