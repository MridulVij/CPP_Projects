// MV_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "MV_table.h"
#include "MV_multicalc.h"
#include "MV_Calculator_Header.h"
#include "MV_odd_even.h"

void mridul()
{
	std::cout << "\n\t    //\\   /\\      ||||\\   |||||||   ||||\\     ||    ||   ||      \t";
	std::cout << "\n\t   //  \\ /  \\     ||  ))     |      ||   \\    ||    ||   ||      \t";
	std::cout << "\n\t  //    |    \\    || //      |      ||    ))  ||    ||   ||      \t";
	std::cout << "\n\t //           \\   || \\       |      ||   //   ||    ||   ||      \t";
	std::cout << "\n\t//             \\  ||  \\   |||||||   ||||//    ||||||||   ||||||||.Developer\t\n\n";
}

// Main function
int main(){
mridul();
	int switcher;
	std::cout << "\n\t\t\tWELCOME TO UNIVERSAL CALCULATOR\t\t\t\n";
	std::cout << "\nEnter 1. To Start Multi-Calculator\nEnter 2. Start Even/Odd\nEnter 3. To Start Table Generator\nEnter 4. To Exit/Close\n\n";
	std::cin >> switcher;
	switch (switcher) 
	{
	case 1:
		multi_calculator_call();  //function calling
		break;
	case 2:
		odd_even_call();
		//std::cout << "Feature is Coming Soon!";
		break;
	case 3:
		table_generator_call();   //function calling
	case 4:
		exit(0);
	default:
		std::cout << "\nSelected Wrong Choice: [Try Again]\n";
		main();
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// functionalities we add here:
// 1.  Table calculator  = Done!
// 2.  Addition, Substraction, Multiplication, Divide, Molulas = Done!
// 3.  problem facing - uninitialized local variable 'variable' used

