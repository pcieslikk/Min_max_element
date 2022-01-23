#include <iostream>
int main()
{
	int t[10];
	for (int id = 0; id < 10; ++id)
	{
		std::cout << "Podaj wartosc " << id<<":";
		std::cin >> t[id];
	}
	int min = t[0];
	int max = t[0];
	for (int id = 1; id< 10; id++)
	{
		if (t[id] < min)
			min = t[id];
		if (t[id] > max)
			max = t[id];
	}
	std::cout << "Minimalna wartosc:" << min<<"\n";
	std::cout << "Maksymalna wartosc:" << max<<"\n";
}
