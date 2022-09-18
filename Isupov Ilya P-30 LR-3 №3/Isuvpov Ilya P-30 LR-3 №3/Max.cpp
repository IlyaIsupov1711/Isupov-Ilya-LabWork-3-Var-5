#include <iostream>

double max(double fir_num, double sec_num)
{
	double max;
	if (fir_num > sec_num)
	{
		max = fir_num;
	}
	else
	{
		max = sec_num;
	}
	return max;
}