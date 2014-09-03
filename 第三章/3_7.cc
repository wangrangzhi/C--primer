#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	cout << "enter the two string: " << endl;
	cin >> s1 >> s2;

	if(s1 == s2)
		cout << "they are equal." << endl;
	else if(s1 > s2)
		cout << "\"s1 is bigger" << endl;
	else
		cout << "s2 is bigger." << endl;

	string::size_type len1, len2;
	len1 = s1.size();
	len2 = s2.size();
	if(len1 == len2)
		cout << "the same length" << endl;
	else if (len1 > len2)
		cout << "s1 is longer" << endl;
	else
		cout << "s2 is longer" << endl;	

	return 0;
}
