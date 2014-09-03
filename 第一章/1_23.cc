#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total, trans;
	std::cout << "Enter the trans" << std::endl;
	if(std::cin >> total)
	{
		while(std::cin >>trans)
		{
			if(total.same_isbn(trans))
			{
				total = total + trans;
			}else
			{
				std::cout << "not the same isbn" << std::endl;
				return -1;
			}
			

		}
		std::cout << "the total:" << std::endl << total ;
	}else
	{
		std::cout << "No data?" << std::endl;
		return -1;
	}
	

	return 0;			
	
}
