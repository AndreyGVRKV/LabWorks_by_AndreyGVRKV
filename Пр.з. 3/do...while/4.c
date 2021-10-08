#include "ft.h"

int findFirstElement(double eps)
{
	double z;
	int i;
	
	i = 0;
	z = pow(-1, i)*((i+1)/(i*i*i+2));
    do
	{
		z = pow(-1, i)*((i+1)/(i*i*i+2));
		if (fabs(z) < eps)
        {
            break ;
        }
        i++;
	} while (fabs(z) > eps);
	return (i);
}
