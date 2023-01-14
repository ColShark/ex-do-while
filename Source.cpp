#include <iostream>

int main()
{
	int suma, diferenta, numar1, numar2;
	char raspuns;
	do {
		std::cout << "Numar 1:";
		std::cin >> numar1;
		std::cout << "Numar 2:";
		std::cin >> numar2;

		suma = numar1 + numar2;
		diferenta = numar1 - numar2;

		std::cout << "Suma este " << suma << std::endl;
		std::cout << "Diferenta este " << diferenta << std::endl;

		std::cout << "Pentru a relua calculul apasa tasta D sau d: ";
		std::cin >> raspuns;
	} while (raspuns == 'D' || raspuns == 'd');
	system("pause");
}