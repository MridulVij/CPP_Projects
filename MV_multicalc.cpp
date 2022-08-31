#include <iostream>
#include "MV_table.h"
#include "MV_multicalc.h"
#include "MV_Calculator_Header.h"
#include "MV_odd_even.h"

//
void multi_calculator_call() // function defination
{
	int i = 0;
	char op;
	long double first, second, sum;
	//extern long int input;
	std::cout << "\t\tWelcome in Mathematics = Multi-Calculator\t\t";
	std::cout << "\nEnter an operator/Symbols (+, -, *, /, %): \n";
	std::cin >> op;
	std::cout << "\nEnter two Numbers/Operands: \n";
	std::cin >> first >> second;
	switch (op) {
		long inp;
	case '+':
		sum = first + second;
		std::cout << "\n" << "Answer is:" << sum << "\nEnter 1. Back to Main Menu\nEnter 2. Calculate More\n";
		std::cin >> inp;
		if (inp < 2)
			main();
		else
			multi_calculator_call();
		break;

	case '-':
		sum = first - second;
		std::cout << "\n" << "Answer is:" << sum << "\nEnter 1. Back to Main Menu\nEnter 2. Calculate More\n";
		std::cin >> inp;
		if (inp < 2)
			main();
		else
			multi_calculator_call();
		break;

	case '*':
		sum = first * second;
		std::cout << "\n" << "Answer is:" << sum << "\nEnter 1. Back to Main Menu\nEnter 2. Calculate More\n";
		std::cin >> inp;
		if (inp < 2)
			main();
		else
			multi_calculator_call();
		break;

	case '/':
		sum = first / second;
		std::cout << "\n" << "Divide -> Quotient:" << sum << "\nEnter 1. Back to Main Menu\nEnter 2. Calculate More\n";
		std::cin >> inp;
		if (inp < 2)
			main();
		else
			multi_calculator_call();
		break;
/*
	case '%':
		sum = first % second;
		std::cout << "\n" << "Divide -> Remainder:" << sum << "\nEnter 1. Back to Main Menu\nEnter 2. Calculate More\n";
		std::cin >> input;
		if (input < 2)
			main();
		else
			multi_calculator_call();
		break;
		*/

	default:
		std::cout << "\nError! operator is not correct [Try again]\n\nEnter 1. Back to Main Menu\nEnter 2. Calculate More\n";
		std::cin >> inp;
		if (inp < 2)
			main();
		else
			multi_calculator_call();
	}

}
//