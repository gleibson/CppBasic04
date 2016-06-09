#include<iostream>
#include<limits.h>
#include "functions.h"


int main()
{
	std::cout << "Test factorial: \n";
	int num;
	for (num = 0; num < 5; ++num)
		std::cout << "Factorial of the " << num << "=" << factorial(num) << '\n';
    
	std::cout << "\n Test Pontention";
	for (num = 0; num < 5; ++num)
		std::cout << "10 exponecial to the " << num << "=" << potention(10, num) << '\n';
	
	std::cout << "\n Test PA_Totaltherms: \n";
	int reason;
	for (reason = 0; reason < 4; ++reason)
		std::cout << "Total therms between 1 and 10, reason " << reason << "=" << PA_Totaltherms(1, 10, reason) << '\n';
	for (reason = -1; reason < -4; --reason)
		std::cout << "Total therms between 10 and 1, reason " << reason << "=" << PA_Totaltherms(10, 1, reason) << '\n';
		std::cout << "Total therms between 1 and 10, reason " << -1 << "=" << PA_Totaltherms(10, 1, -1) << '\n';
		std::cout << "Total therms between 10 and 1, reason " << 1 << "=" << PA_Totaltherms(10, 1, 1) << '\n';
		std::cout << "Total therms between 10 and 10, reason "<< 1 << "=" << PA_Totaltherms(10, 10, 1) << '\n';
		std::cout << "Total therms between 10 and 10, reason " << -1 << "=" << PA_Totaltherms(10, 10, -1) << '\n';

		std::cout << "\nTest print pairs: \n";
		PrintPair(1, 11);
		PrintPair(1, 10);
		PrintPair(2, 11);
		PrintPair(2, 10);
		PrintPair(12, 12);
		PrintPair(11, 11);
		PrintPair(12, 11);
    
	std::cout<< "\n Test DoubleValue: \n";
	std::cout<< "Receiveing 1 R$(real) in the first day of the first month,\n"
		     << "and folding the value all days, \n"
		     << "in the 31 day of the month I will have: \n ";
	std::cout<< int(DoubleValue(31)) << "\n";
	std::cout<< "The same calcule using 'for': \n";
	std::cout<< int(DoubleValue_for(31)) << "\n";
	std::cout<< "\n Test Total Combinations: \n";
	std::cout<< " Using factorial, know the chances to win: ";
	std::cout<< "\n in the Loto: 1 in " << int(TotalCombinations(60, 6));
	std::cout<< "\n in the Loto Easy: 1 in " << int(TotalCombinations(25, 15));

	std::cout<< "\nRequesting values to the user \n";
	
	std::cout << "\n Inform number for the factorial calculation: ";
	std::cin >> num;
	if (ValidationEntrace())
		std::cout << "Factorial of the " << num << "=" << factorial(num) << '\n';
	
	std::cout << "\n Inform base and exp for the potention: ";
	int base, exp;
	std::cin >> base >> exp;
	if (ValidationEntrace())
		std::cout << base << "potentiation of the " << exp << potention(base,exp) << '\n';

	std::cout << "\n Inform initial, final and reason for the calculation total of the therms of PA: ";
	int initial, final;
	std::cin >> initial >> final >> reason;
	if (ValidationEntrace())
		std::cout << "Total of the therms in this PA: " << "=" << PA_Totaltherms(initial, final, reason) << '\n';
	
	std::cout << "\nInform initial and final for the pair list: ";
	std::cin >> initial >> final;
	if (ValidationEntrace())
		PrintPair(initial, final);
	return 0;
}
bool ValidationEntrace()
{
	if (std::cin.fail())
	{
		std::cout << "Invalid Values\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		return false;
	}
	return true;
}
