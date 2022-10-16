#include <iostream>
using namespace std;

const int MAX_POINTS = 100;
int main()
{
	cout << "Your max points are 100. Please enter your points to see what grade is yours: ";
	int percent = 0;
	cin >> percent;
	
	if (percent >= 90)
	{
		cout << "Your grade is Excellent+." << endl;
	}
	else if (percent >= 80)
	{
		cout << "Your grade is Excellent." << endl;

	}
	else if (percent >= 70)
	{
		cout << "Your grade is Very Good." << endl;
	}
	else if (percent >= 60)
	{
		cout << "Your grade is Great." << endl;
	}
	else if (percent >= 40)
	{
		cout << "Your grade is Medium." << endl;
	}
	else if (percent < 40)
	{
		cout << "Your grade is Low. You could done it better." << endl;
	}

	return 0;
}