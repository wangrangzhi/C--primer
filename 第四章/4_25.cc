#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	cout << "Enter two strings: " << endl;
	cin >> str1 >> str2;
	
	if(str1 > str2)
		cout << "str1 is bigger" << endl;
	else if(str1 < str2)
		cout << "str2 is bigger" << endl;
	else
		cout << " they are equal" << endl;

	return 0;
}
