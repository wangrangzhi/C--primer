#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book1, book2;
	std::cout << "Enter two transactions:" << std::endl;
	std::cin >> book1 >> book2;
	
	if(book1.same_isbn(book2))
		std::cout << "the same" << std::endl << book1 + book2;
	else
		std::cout << "not the same" << std::endl;
	return 0;			
	
}
