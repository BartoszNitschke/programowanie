#include <iostream>

using namespace std;

int liczba;

int main()
{
	cout << "Prosze podac liczbe: " << endl;
	cin >> liczba;

	cout << liczba << endl;

	if ((liczba % 3 == 0) && (liczba % 5 == 0))
	{
		cout << "Fizzbuzz" << endl;
	}
	else if (liczba % 5 == 0)
	{
		cout << "Buzz" << endl;
	}
	else if (liczba % 3 == 0)
	{
		cout << "Fizz" << endl;
	}

	return 0;
}
