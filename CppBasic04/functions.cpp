#include<iostream>
#include "functions.h"


int factorial(int number)
{   
	int result;
	for (result = 1; number > 1; --number)
		  result*= number;
	std::cout << "Result factiorial of the " << number << " is" << result << "\n";
}
int potention(int base, int exp)
{
	for (int result = 0; exp > 0; --exp)
		result *= exp;
}
int PA_Totaltherms(int initial, int final, int reason)
{
	
	
	/*if (reason == 0)
	{
		std::cout << "Invalid number the reason can't be less than 0" << "\n";
		std::cout << "Try Again" << "\n";
		return 0;
    }

	if (initial > final)
	{   
	    if (reason > 0)
		std::cout << "Reason need to be positive" << "\n";
		std::cout << "Try Again" << "\n";
		return 0;
	}
	else if (initial < final)
	{   
	    if (reason < 0)
		std::cout << "Reason need to be negative" << "\n";
		std::cout << "Try Again" << "\n"
		return 0;
	}*/
	if (reason == 0 || (initial > final && reason > 0) || (initial < final && reason < 0))
		return 0;
	return (final - initial + reason) / reason;

}
void PrintPair(int initial, int final)
{
	if (initial & 1)
		++initial;
	
	int total_pairs = PA_Totaltherms(initial, final, 2);
	std::cout << "Total of numbers to print: " << total_pairs << '\n';

	std::cout << "Pairs of the interval: \n";
	
	if (total_pairs > 0)
	{
		for (int number = initial; number <= final; number += 2)
		{
			if (number > initial)
				std::cout << ",";
			    std::cout << number;
		}
		std::cout << '\n';
	}
	else
		std::cout << "No pair number in this interval\n";
}
double DoubleValue(int last_day)
{
	return potention(2, last_day - 1);
}
double DoubleValue_for(int last_day)
{
	double result = 1;
	for (int day = 1; day < last_day; ++day)
		result *= 2;
	return result;
}
double TotalCombinations(int conjuctes, int choices)
{
	return factorial(conjuctes) / (factorial(choices) *factorial(conjuctes - choices));
}