#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int ival;
	cout << "Enter the number: " << endl;
	while(cin >> ival)
		ivec.push_back(ival);

	if(ivec.size() == 0);
	{
		cout << ivec.size() << endl;
		
		cout << "No element!" << endl;
		return -1;
	}
	
	cout << "sum the each pair if adjacent elements int the vector: " << endl;
	vector<int>::size_type cnt = 0;
	for(vector<int>::iterator iter = ivec.begin(); iter < ivec.end()-1; iter = iter+2)
	{
		cout << *iter + *(iter+1) << "\t";
		++cnt;
		if(cnt % 6 == 0)
			cout << endl;
	}

	if(ivec.size()%2 != 0)
	{
		cout << "the last elements is not been summed: " << *(ivec.end() - 1) << endl;
	}

	

	return 0;
}
