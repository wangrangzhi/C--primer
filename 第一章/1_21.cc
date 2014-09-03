#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	std::cout << "Enter transactions:" << std::endl;
	while(std::cin >> book)
	{
	std::cout << "print everything about the book" << std::endl;
	std::cout << book  << std::endl;
	}
}
