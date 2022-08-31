
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
	long var=0, inp1=0;
	std::cin >> var;
	if (var % 2 == 0) {
		std::cout << "\nThis Number is " << var;
		std::cout << " Odd\n";
		std::cin >> inp1;
		if (inp1 < 2)
			main();
		else
			odd_even_call();
	}
	else {
		std::cout << "\nThis Number is " << var;
		std::cout << " Even\n";
		if (inp1 < 2)
			main();
		else
			odd_even_call();
	}
}
