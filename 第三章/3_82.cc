#include <iostream>
#include <string>
using namespace std;

int main()
{
	string result_str, str;
	
	cout << "Enter strings(Ctrl+z to end): " << endl;

	while(cin >> str)
		result_str = result_str+ ' ' +str;

	cout << result_str <<endl;	

	return 0;
}
