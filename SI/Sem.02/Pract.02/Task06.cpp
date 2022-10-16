#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	double Dom = 0;
	cout << "Please enter number 1 for 'a' " << "then enter number 2 for 'b' " << " and last number 3 for c. " << endl;
	cin >> num1 >> num2 >> num3;
	if ((Dom = num2 * num2 - 4 * num1 * num3) > 0)
	{
		cout << "Now you have quadratic equation." << endl;
		double X1 = (-num2 + sqrt(Dom)) / 2 * num1;
		double X2 = (-num2 - sqrt(Dom)) / 2 * num1;
		cout << "Your first root of equation is " << X1 << " and your second root of equation is " << X2 << "." << endl;
	}
	else
	{
		cout << "The equation have no roots." << endl;
	}
	
	return 0;
}