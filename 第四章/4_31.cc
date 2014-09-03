#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string in_str;
	const size_t str_size = 10;
	char result_str[str_size+1];

	cout << "enter a string smaller than " << str_size << endl;
	cin >> in_str;

	size_t len = strlen(in_str.c_str());
	if(len > str_size)
	{
		len = str_size;
		cout << "string is longer than 10, and is only stored only 10 char!" << endl;

	}
	strncpy(result_str, in_str.c_str(), len);
	result_str[len+1] = '\0';

	cout << result_str << endl;


	return 0;
}
