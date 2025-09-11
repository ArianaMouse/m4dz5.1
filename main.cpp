#include <iostream>
#include "MyMath.h"

int main() {
	setlocale(LC_ALL, "Rus");
	double veriable1{ };
	double veriable2{ };

	int option{};
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): " << std::endl;
	std::cin >> option;

	std::cin >> veriable1;
	std::cin >> veriable2;

	switch(option) {
	case 1:
		std::cout << "Sum: " << sum(veriable1, veriable2) << std::endl;
		break;

	case 2:
		std::cout << "Difference: " << difference(veriable1, veriable2) << std::endl;
		break;

	case 3:
		std::cout << "Multiplication: " << multiplication(veriable1, veriable2) << std::endl;
		break;

	case 4:
		std::cout << "Division: " << division(veriable1, veriable2) << std::endl;
		break;

	case 5:
		std::cout << "RaisingPower: " << raisingPower(veriable1, veriable2) << std::endl;
		break;

	default:
		std::cout << "Такой пункт отсутствует!";
		return 0;
	}

	return 0;
}