#include <iostream>

double even(double num)
{
	int num2;
	num2 = num;
	if (num2 % 2 == 0)
	{
		std::cout << "�������� ����� ������" << std::endl;
	}
	else
	{
		std::cout << "�������� ����� �� ������" << std::endl;
	}
	return 0;
}