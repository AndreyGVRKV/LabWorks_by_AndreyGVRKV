#include "ft.h"

double summ(int n)
{
	int i;
	double sum;

	i = 0;
	sum = 0;
    do
	{
		sum += pow(-1, i)*((i+1)/(i*i*i+2));
		i++;
	} while (i < n);
	return (sum);
}

