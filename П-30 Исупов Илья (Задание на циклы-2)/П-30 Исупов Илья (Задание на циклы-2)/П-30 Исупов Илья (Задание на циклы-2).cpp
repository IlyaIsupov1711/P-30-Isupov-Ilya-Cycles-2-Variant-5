#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	double num;
	std::cout << "Введите количество итераций:"; std::cin >> n;
	int x;
	std::cout << "Введите число x:"; std::cin >> x;
	std::cout << "Ln(1+" << x << "):" << std::endl;
	int o = 1;
	num = x - (pow(x, o) / o);
	for (int i = 0; i < n; ++i)
	{
		num += (pow(x, o) / o);
		o++;
	}
	num += (pow(-1, n + 1) * pow(x, n)) / n;
	std::cout << num << std::endl;
}