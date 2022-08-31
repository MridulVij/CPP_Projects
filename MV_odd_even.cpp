
#include <iostream>
#include "MV_table.h"
#include "MV_multicalc.h"
#include "MV_Calculator_Header.h"
#include "MV_odd_even.h"


//extern long inp1;
void odd_even_call()
{
	// problem with variables - var
	std::cout << "\nEnter Number To Check: [Even/Odd]\n";
	long var = 0; 
	long inp1;
	std::cin >> var;
	if (var % 2 == 0) {
		//std::cout << "\nThis Number is " << var;
		std::cout << var << " = is EVEN\n\nPress 1. To Find More!\nPress 2. Back To Main Menu";
		//std::cin >> inp1;
		//std::cout << "Press 1. To Find More!\nPress 2. Back To Main Menu";
		std::cin >> inp1;
		if (inp1 < 2) { // 2<2=false
			odd_even_call();
		}
		else {
			main();
		}
	}
	else {
		//std::cout << "\nThis Number is " << var;
		std::cout << var << " = is ODD\n\nPress 1. To Find More!\nPress 2. Back To Main Menu";
		std::cin >> inp1;
		if (inp1 < 2) {
			odd_even_call();
		}
		else {
			main();
		}
	}
}
