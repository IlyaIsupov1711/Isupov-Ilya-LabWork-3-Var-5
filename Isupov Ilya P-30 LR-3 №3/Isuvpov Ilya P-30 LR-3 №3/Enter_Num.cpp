#include <iostream>

double enter()
{
	double x;
	setlocale(LC_ALL, "RUS");
	std::cout << "������� ������������ �����=";
	std::cin >> x;
	return x;
}