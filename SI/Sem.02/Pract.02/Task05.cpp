#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter the three sides of the triangle: ";
	double sideA = 0;
	double sideB = 0;
	double sideC = 0;
	cin >> sideA;
	cin >> sideB;
	cin >> sideC;
	
	if (sideA + sideB > sideC && sideB + sideC > sideA && sideA + sideC > sideB)
	{
		cout << "A triangle exists." << endl;
	}
	else
	{
		cout << "A triangle with such side values does not exist." << endl;
	}
	return 0;
}