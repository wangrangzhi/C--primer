#include <iostream>

int main()
{
	int amount = 0, value;
	while(std::cin >> value)
		if(value<=0)
			++amount;
	std::cout << "the negative amount of the number is "<< amount << std::endl;
	return 0;
}
