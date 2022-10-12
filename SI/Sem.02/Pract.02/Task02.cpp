#include <iostream>
using namespace std;
int main()
{
	char symbol;

	cin >> symbol;
	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
	{
		cout << "The letter is from Latin alphabet." << endl;

	}
	
	
	switch (symbol)
	{
	case 'A':
	case 'I':
	case 'E':
	case 'O':
	case 'U':
	case 'Y':
	case 'a':
	case 'i':
	case 'e':
	case 'o':
	case 'u':
	case 'y':
		cout << "The letter is vowel." << endl;
		break;

	default:
		cout << "The letter is not a vowel.";
	}
	return 0;
}