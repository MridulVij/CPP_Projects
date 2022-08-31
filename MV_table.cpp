#include <iostream>
#include "MV_table.h"
#include "MV_multicalc.h"
#include "MV_Calculator_Header.h"
#include "MV_odd_even.h"


void table_generator_call()  // function defination
{
	long long int num, sum, i;

	std::cout << "\t\tWelcome in Mathematics = Table-Generator\t\t";
	std::cout << "\nNote - Enter Any 'Numeric Value' to Generate Maths Table.\n";
	std::cin >> num;
	for (i = 1; i <= 10; i++)
	{
		sum = num * i;
		std::cout << num << " x " << i << " = " << sum << "\n";
	}
	//printf("\n\t\tEnter the Number Value for More Table Generation!\t\t\nPending Code = // pending in this user will enter input how much they want to generate tables = no. of input == no. of tables generated");
	std::cout << "\n\nPress 1. Generate More\nPress 2. Back To Main Menu\nPress 3. Use Calculator!\nPress 4. Use Odd/Even Finder!";

	// Pending Exit Function Not Working Properly!
	//
	int switch1;
	std::cin >> switch1;
	switch (switch1)
	{
	case 1:
		table_generator_call();
	case 2:
		main();
	case 3:
		multi_calculator_call();
	default:
		exit(0);
	//case 4:
		//odd_even_call();
	}
}
