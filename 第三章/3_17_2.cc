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

	if((int)(ivec.size()) == 0);
	{
		cout << ivec.size() << endl;
		cout << (ivec.size() == 0) << endl;
		if(0)
			cout << "is 0" << endl;
		if(2)
			cout << "is 2" << endl;	
		cout << "No element!" << endl;
		return -1;
	}
	
	cout << "yes" <<endl;
	

	return 0;
}
