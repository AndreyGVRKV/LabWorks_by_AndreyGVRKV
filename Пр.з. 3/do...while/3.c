#include "ft.h"

void print(int n, int k)
{
	int i;
	double z;

	i = 0;
	z = 0;
    do
	{
		z = pow(-1, i)*((i+1)/(i*i*i+2));
		if ((i + 1) % k == 0)
		{
			i++;
			continue ;
		}
		printf("%.4lf ", z);
		i++;
	} while(i < n);
}
