#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	vector<string> svec;
	string str;
	cout << "enter the text" << endl;
	while(cin >> str)
		svec.push_back(str);
	
	if(svec.size() == 0)
	{
		cout << "No string! " << endl;
		return -1;
	}
	
	cout << "transformed elements from the vectors: " << endl;
	vector<string>::size_type cnt = 0;
	for(vector<string>::iterator iter = svec.begin(); iter != svec.end(); ++iter)
	{
		for(string::size_type index=0; index!=(*iter).size(); ++index)
			if(islower((*iter)[index]))
				(*iter)[index] = toupper((*iter)[index]);
		
		cout << *iter << " " ;
		++cnt;
		if(cnt%8 == 0)
			cout << endl;
	}

	return 0;
}
