#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	vector<string> sver;
	string str;
	cout << "enter the strings" << endl;
	while(cin >> str)
		sver.push_back(str);

	char **parr = new char*[sver.size()];
	
	size_t ix = 0;
	for(vector<string>::iterator iter = sver.begin();
		iter != sver.end(); ++iter, ++ix)
	{
		char *p = new char[(*iter).size() + 1];
		strcpy(p, (*iter).c_str());
		parr[ix] = p;
	}
	
	cout << "Content of vector: " << endl;
	for(vector<string>::iterator iter2 = sver.begin();
		iter2 != sver.end(); iter2++)
			cout << *iter2 << endl;

	cout << " content of the character arrays:" <<endl;
	for(ix =0; ix != sver.size(); ++ix)
		cout << parr[ix] << endl;
	
	for(ix = 0; ix != sver.size(); ++ix)
		delete [] parr[ix];

	delete [] parr;

	return 0;
}
