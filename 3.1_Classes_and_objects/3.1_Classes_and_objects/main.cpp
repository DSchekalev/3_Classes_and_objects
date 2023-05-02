#include <iostream>
#include <string>

class Calculator
{
private:
	double num1;
	double num2;

public:
	double add(double num1, double num2) { return num1 + num2; }
	double multiply(double num1, double num2) { return num1 * num2; }
	double subtract_1_2(double num1, double num2) { return num1 - num2; }
	double subtract_2_1(double num1, double num2) { return num2 - num1; }
	double divide_1_2(double num1, double num2) { return num1 / num2; }
	double divide_2_1(double num1, double num2) { return num2 / num1; }
	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		else { return false; }
	}
	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else { return false; }
	}
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	double num1 = 0;
	double num2 = 0;

	Calculator calcResult;

	while (true)
	{
		do {
			std::cout << "Введите num1: ";
			std::cin >> num1;
			if (!calcResult.set_num1(num1))
			{
				std::cout << "Неверный ввод! " << std::endl;
			};
		} while (!calcResult.set_num1(num1));

		do {
			std::cout << "Введите num2: ";
			std::cin >> num2;
			if (!calcResult.set_num2(num2))
			{
				std::cout << "Неверный ввод! " << std::endl;
			};
		} while (!calcResult.set_num2(num2));

		std::cout << std::endl << "num1 + num2 = " << calcResult.add(num1, num2) << std::endl;
		std::cout << std::endl << "num1 - num2 = " << calcResult.subtract_1_2(num1, num2) << std::endl;
		std::cout << std::endl << "num2 - num1 = " << calcResult.subtract_2_1(num1, num2) << std::endl;
		std::cout << std::endl << "num1 * num2 = " << calcResult.multiply(num1, num2) << std::endl;
		std::cout << std::endl << "num1 / num2 = " << calcResult.divide_1_2(num1, num2) << std::endl;
		std::cout << std::endl << "num2 / num1 = " << calcResult.divide_2_1(num1, num2) << std::endl;
		std::cout << std::endl;
	}
}