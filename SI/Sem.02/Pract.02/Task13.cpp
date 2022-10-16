#include <iostream>
using namespace std;
int main()
{
	int number = 0;
	cout << "Please enter a number: ";
	cin >> number;
	if (number >= 1000 && number <= 9999)
	{
		int newNumber1 = number / 1000;
		int newNumber2 = number % 10;
		int final1 = newNumber1 * 10 + newNumber2;
		cout <<"First and last digit: "<< final1 << endl;
		int seconNumber1 = (number / 100) % 10;
		int secondNumber2 = (number / 10) % 10;
		int final2 = seconNumber1 * 10 + secondNumber2;
		cout << "Second and third digit: "<< final2 << endl;
		if (final1 < final2)
		{
			cout << " Exit: less (" << final1 << "<" << final2 << ")" << endl;
		}
		else if (final1 > final2)
		{
			cout << "Exit: greater (" << final1 << ">" << final2 << ")" << endl;
		}
		else if (final1 = final2)
		{
			cout << "Exit: equal (" << final1 << "=" << final2 << ")" << endl;
		}
		
		
	}
	else
	{
		cout << "Is not a four-digit number." << endl;
	}
	return 0;
 }