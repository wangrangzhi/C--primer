#include <iostream>

int main()
{
	int base, exponent;
	std::cout << "enter the base and the exponent:" << std::endl;
	std::cin >> base >> exponent;
	long sum = 1;
	for(int i = 0; i< exponent; i++)
		sum*=base;
	std:: cout << "the sum : " << std::endl << sum;
	return 0;
}
