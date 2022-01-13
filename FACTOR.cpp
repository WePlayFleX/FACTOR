//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	unsigned int numb;
//	unsigned long fact = 1;
//	cout << "Please enter an integer: ";
//	cin >> numb;
//	for (int i = numb; i > 0; i--)
//	{
//		fact *= i;
//	}
//	cout << "The factorial of a number is: " << fact << endl;
//
//	system("pause");
//	return 0;
//}

#include <iostream>

using namespace std;

unsigned long factfunc(unsigned long);

int main()
{
	int n;
	unsigned long fact;

	cout << "Please enter an integer: ";
	cin >> n;

	fact = factfunc(n);
	cout << "Factorial number " << n << " is equal to " << fact << endl;

	system("pause");
	return 0;
}

unsigned long factfunc(unsigned long n)
{
	if (n > 1)
	{
		return n * factfunc(n - 1);
	}
	else
	{
		return 1;
	}
}