#include <iostream>

double enter();
double max(double fir_num, double sec_num);
double even(double num);

int main()
{
    double Max;
    double first_Num;
    double second_Num;
    setlocale(LC_ALL, "RUS");
    first_Num = enter();
    second_Num = enter();
    Max=max(first_Num, second_Num);
    std::cout << "Максимальное число среди 2 чисел=" << Max << std::endl;
    even(Max);
    return 0;
}