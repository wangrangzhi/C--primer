#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int ival;

	cout << "Enter the number(ctrl D to end): " << endl;
	while(cin >> ival)
		ivec.push_back(ival);

	if(ivec.size() == 0)
	{
		cout << "No element?!" << endl;
		return -1;
	}	

	cout << "sum of each pair of adjacent element int the vector: " << endl;
	for(vector<int>::size_type ix = 0; ix<ivec.size()/2; ix++)
	{
		cout << ivec[ix] + ivec[ivec.size()-1-ix] << "\t";
		if(ix+1 % 6 == 0)
			cout << endl;
	}

	if(ivec.size()%2 != 0)
		cout << "the middle element is not been sum" << ivec[ivec.size()/2] << endl;

	return 0;
}
