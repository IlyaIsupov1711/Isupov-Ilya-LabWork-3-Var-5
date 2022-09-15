#include <iostream>

int Main();

int Ras(int a, int b)
{
	double sr_geom;
	sr_geom = sqrt(a * b);
	std::cout << "Результат=";
	std::cout << sr_geom << std::endl;
	return sr_geom;
}