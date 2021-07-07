#include <iostream>
#include <sstream>
using namespace std;


int main()
{
	try {
		string value = "6516g514";
		int res = stoi(value);

		cout << res << endl;
	}
	catch (exception a)
	{
		cout << "Invalid_argument: " << a.what() << endl;
	}
	
}
