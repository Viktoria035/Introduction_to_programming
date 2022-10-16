#include <iostream>
using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout << "Please enter some numbers and we will make the biggest of them." << endl;
	cin >> num1 >> num2 >> num3;
	if (num1 > num2 && num1 > num3 && num2 > num3)
	{
		cout << "The biggest number is: " << num1 << num2 << num3 << endl;
	}
	else if(num1 > num2 && num1 > num3 && num3 > num2)
	{
		cout << "The biggest number is: " << num1 << num3 << num2 << endl;
	}
	else if (num2 > num1 && num2 > num3 && num1 > num3)
	{
		cout << "The biggest number is: " << num2 << num1 << num3 << endl;
	}
	else if (num2 > num1 && num2 >> num3 && num3 > num1)
	{
		cout << "The biggest number is: " << num2 << num3 << num1 << endl;
	}
	else if (num3 > num1 && num3 > num2 && num2 > num1)
	{
		cout << "The biggest number is: " << num3 << num2 << num1 << endl;
	}
	else if (num3 > num1 && num3 > num2 && num1 > num2)
	{
		cout << "The biggest number is: " << num3 << num1 << num2 << endl;
	}
	
	return 0;
}