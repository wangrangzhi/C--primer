#include <iostream>
#include <vector>
using namespace std;

int main()
{
	const size_t arr_size = 8;
	int int_arr[arr_size];
	
	cout << "enter 8 number! " << endl;
	for(size_t ix=0; ix!= arr_size; ++ix)
		cin >> int_arr[ix];

	vector<int> ivec(int_arr, int_arr + arr_size);
	
	for(vector<int>::iterator iter = ivec.begin(); iter!= ivec.end(); ++iter)
		cout << *iter << endl;	

	return 0;
}
