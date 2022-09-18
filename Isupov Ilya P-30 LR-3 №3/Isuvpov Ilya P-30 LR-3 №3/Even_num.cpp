#include <iostream>

double even(double num)
{
	int num2;
	num2 = num;
	if (num2 % 2 == 0)
	{
		std::cout << "Заданное число четное" << std::endl;
	}
	else
	{
		std::cout << "Заданное число не четное" << std::endl;
	}
	return 0;
}