#include <string>
#include <iostream>
using namespace std;

int main()
{
	const string str1("Mary and Linda ");
	const string str2("are firends.");
	string result_str;
	result_str = str1;
	result_str += str2;
	cout << result_str << endl;

	return 0;
}
