#include <iostream>
#include <string>

class Counter
{
private:
	int counterValue = 0;

public:
	Counter(int initValue)
	{
		this->counterValue = initValue;
	}

	Counter() {}

	int addValue() { return counterValue++; }
	int reduceValue() { return counterValue--; }
	int getCounterValue() { return counterValue; }
};

void method(Counter userCounter, std::string userCommand, bool checkUserCommand)
{
	do
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> userCommand;

		if (userCommand == "x" || userCommand == "х" || userCommand == "X" || userCommand == "Х")
		{
			std::cout << "До свидания!";
			checkUserCommand = true;
		}
		else if (userCommand == "+")
		{
			userCounter.addValue();
		}
		else if (userCommand == "-")
		{
			userCounter.reduceValue();
		}
		else if (userCommand == "=")
		{
			std::cout << "Значение счетчика: " << userCounter.getCounterValue() << std::endl;
		}
		else
		{
			std::cout << "Вы ввели неверную команду." << std::endl;
		}
	} while (!checkUserCommand);
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	int userValue = 0;
	std::string userSelect;
	std::string userCommand;
	bool checkUserSelect = false;
	bool checkUserCommand = false;

	do
	{
		std::cout << std::endl << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
		std::cin >> userSelect;
		std::cout << std::endl;

		if (userSelect == "да" || userSelect == "Да")
		{
			std::cout << "Введите начальное значение счётчика: ";
			std::cin >> userValue;
			checkUserSelect = true;
			Counter userCounter(userValue);
			method(userCounter, userCommand, checkUserCommand);
		}
		else if (userSelect == "нет" || userSelect == "Нет")
		{
			checkUserSelect = true;
			Counter userCounter;
			method(userCounter, userCommand, checkUserCommand);
		}
		else
		{
			std::cout << "Вы ввели неверную команду." << std::endl;
		}
	} while (!checkUserSelect);
	return 0;
}