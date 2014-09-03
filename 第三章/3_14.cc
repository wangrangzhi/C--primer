#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	vector<string> svec;
	string str;
	cout << "text enter: " << endl;
	while(cin >> str)
		svec.push_back(str);
	
	if(svec.size() == 0)
	{
		cout << "no element!" << endl;
		return -1;
	}

	cout << "transformed elements from the vextor: " << endl;
	for(vector<string>::size_type ix = 0; ix!=svec.size(); ++ix)
	{
		for(string::size_type index=0; index!= svec[ix].size(); ++index)
			if(islower(svec[ix][index]))
				svec[ix][index] = toupper(svec[ix][index]);
		cout << svec[ix] << " ";
		if((ix+1)%8 == 0)
			cout << endl;	
	}

	return 0;
}
