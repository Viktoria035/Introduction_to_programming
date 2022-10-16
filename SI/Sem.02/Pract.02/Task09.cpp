#include <iostream>
using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout << "Please enter three integer numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	if (num1 > num2 && num1 > num3 && num2 > num3)
	{
		cout << "In ascending order, the numbers are arranged like this: " << num1 <<" "<< num2 <<" "<< num3 << endl;
	}
	else if (num1 > num2 && num1 > num3 && num3 > num2)
	{
		cout << "In ascending order, the numbers are arranged like this: " << num1 << " " << num3 << " " << num2 << endl;
	}
	else if (num2 > num1 && num2 > num3 && num1 > num3)
	{
		cout << " In ascending order, the numbers are arranged like this: " << num2 << " " << num1 << " " << num3 << endl;
	}
	else if (num2 > num1 && num2 > num3 && num3 > num1)
	{
		cout << "In ascending order, the numbers are arranged like this: " << num2 << " " << num3 << " " << num1 << endl;
	}
	else if (num3 > num2 && num3 > num1 && num2 > num1)
	{
		cout << "In ascending order, the numbers are arranged like this: " << num3 << " " << num2 << " " << num1 << endl;
	}
	else if (num3 > num2 && num3 > num1 && num1 > num2)
	{
		cout << "In ascending order, the numbers are arranged like this: " << num3 << " " << num1 << " " << num2 << endl;
	}
	return 0;
}