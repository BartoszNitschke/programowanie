#include <iostream>

using namespace std;

int main()
{
	int h;

	cout << "Podaj wysokosc: " << endl;
	cin >> h;

	for (int i = 1; i <= h; i++)
	{
		int liczba = 1;
		for (int j = 0; j < 5; j++)
			cout << " ";
		for (int k = 1; k <= i; k++)
		{
			cout << liczba << " ";
			liczba = liczba * (i - k) / k;
		}
		cout << endl;
	}
	return 0;
}
