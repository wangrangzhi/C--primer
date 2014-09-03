#include <iostream>
int main()
{
	const size_t array_size = 10;
	int ia1[] = {0,1,2,3,4,5,6,7,8,9};
	int ia2[10];
	
	for(size_t ix = 0; ix != array_size; ++ix)
	{
		
		ia2[ix] = ia1[ix];
		std::cout << ia2[ix] << std::endl; 
	}
	return 0;
}
