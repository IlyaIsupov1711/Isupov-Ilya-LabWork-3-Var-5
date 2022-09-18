#include <iostream>

double enter()
{
	double x;
	setlocale(LC_ALL, "RUS");
	std::cout << "Введите вещественное число=";
	std::cin >> x;
	return x;
}