#include <iostream>

int main()
{
	std::cout << "Enter th two number: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	int lower, upper;
	if(v1 > v2)
	{
		lower = v2;
		upper = v1;
	}
	else
	{
		
		lower = v1;
		upper = v2;
	}
	std::cout << "output the value between " << v1 << " " << v2 << std::endl;
	for(int i = lower; i < upper; i++)
	{
		std::cout << i << " ";
		if( i%40 == 0)
			std::cout << "\n" << std::endl;
	}
	


	return 0;
}
