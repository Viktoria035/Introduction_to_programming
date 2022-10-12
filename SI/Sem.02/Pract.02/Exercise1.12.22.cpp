#include <iostream>
using namespace std;
int main()
{
	int leapYear = 0;
	cin >> leapYear;
	if (leapYear % 4 == 0) 
	{
		cout << "This year is leap-year ." << endl;
	}
	else 
	{
		cout << "Not leap-year." << endl;

	}
	return 0;
}