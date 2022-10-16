#include <iostream>
using namespace std;
int main()
{
	int day = 0;
	int month = 0;
	cout << "Enter a day: ";
	cin >> day;
	cout << "Enter a month: ";
	cin >> month;
	if (day == 28 && month == 2)
	{
		day = 1;
		month += 1;
	}
	else if ((day == 31) && (month == 1 || month == 2 || month == 3 || month == 4 || month == 5 || month == 6 || month == 7 || month == 8 || month == 9 || month == 10 || month == 11 || month == 12))
	{
		day = 1;
		month += 1;
	}
	else
	{
		day += 1;
	}
	cout << "Tomorrow is : " << day << " day and " << month << " month" << endl;
	
	
	return 0;
}