#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item trans1, trans2;
	int amount = 1;
	std::cout << "Enter the trans" << std::endl;
	if(std::cin >> trans1)
	{
		while(std::cin >>trans2)
		{
			if(trans1.same_isbn(trans2))
			{
				amount++;
			}else
			{
				std::cout << "print the previous trans of amount:" << std::endl << amount;
				std::cin >> trans1;
				amount = 1;
				
			}
			

		}
		std::cout << "the last trans of amount " << std::endl << amount ;
	}else
	{
		std::cout << "No data?" << std::endl;
		return -1;
	}
	

	return 0;			
	
}
