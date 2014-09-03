#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int ival;
	cout << "Enter the numbers: " << endl;
	while(cin >> ival)
		ivec.push_back(ival);

	int  *parr = new int[ivec.size()];
	size_t ix = 0;
	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); iter++, ix++)
			parr[ix] = *iter;

	for(int i=0; i<ix; i++)
		cout << parr[i] << endl;

	delete [] parr;

	return 0;
}
