
#include <iostream>

int enter_num()
{
	int x;
	setlocale(LC_ALL, "RUS");
	std::cout << "Введите число=" << std::endl;
	std::cin >> x;
	return x;
}
