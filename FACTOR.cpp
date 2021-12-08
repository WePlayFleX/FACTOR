#include <iostream>

using namespace std;

int main()
{
	unsigned int numb;
	unsigned long fact = 1;
	cout << "Please enter an integer: ";
	cin >> numb;
	for (int i = numb; i > 0; i--)
	{
		fact *= i;
	}
	cout << "The factorial of a number is: " << fact << endl;

	system("pause");
	return 0;
}