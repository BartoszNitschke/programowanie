#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

float x,y,z;
int a, b;
int operacja;

int main()
{
	cout << "Kalkulator" << endl;
	cout << "--------------" << endl;
	cout << "1. Mnozenie" << endl;
	cout << "2. Dzielenie" << endl;
	cout << "3. Dzielenie liczb calkowitych" << endl;
	cout << "4. Modulowanie (reszta z dzielenia)" << endl;
	cout << "5. Potegowanie" << endl;
	cout << "6. Pierwiastkowanie" << endl;
	cout << "7. Odejmowanie" << endl;
	cout << "8. Koniec programu" << endl << endl;

	for (;;)
	{
		cout << "Podaj nr operacji ktora chcesz wykonac: " << endl;
		cin >> operacja;

		if (operacja == 1)
		{
			cout << "Podaj pierwsza liczbe: " << endl;
			cin >> x;
			cout << "Podaj druga liczbe: " << endl;
			cin >> y;
			cout << "Twoj wynik to: " << x * y;
		}

		if (operacja == 2)
		{
			cout << "Podaj pierwsza liczbe: " << endl;
			cin >> x;
			cout << "Podaj druga liczbe: " << endl;
			cin >> y;
			cout << "Twoj wynik to: " << x / y;

		}

		if (operacja == 3)
		{
			cout << "Pamietaj, ze podajac liczbe niecalkowita kalkulator nie zadziala!" << endl;
			cout << "Podaj pierwsza liczbe: " << endl;
			cin >> a;
			cout << "Podaj druga liczbe: " << endl;
			cin >> b;
			cout << "Twoj wynik to: " << a / b;
		}

		if (operacja == 4)
		{
			cout << "Pamietaj, ze podajac liczbe niecalkowita kalkulator nie zadziala!";
			cout << "Podaj pierwsza liczbe: " << endl;
			cin >> a;
			cout << "Podaj druga liczbe: " << endl;
			cin >> b;
			cout << "Twoj wynik to: " << a % b;
		}

		if (operacja == 5)
		{
			cout << "Podaj liczbe: " << endl;
			cin >> x;
			cout << "Podaj potege do ktorej chcesz podniesc liczbe: " << endl;
			cin >> a;
			cout << "Twoj wynik to: " << pow(x, a);
		}

		if (operacja == 6)
		{
			cout << "Podaj liczbe, z ktorej chcesz uzyskac pierwiastek kwadratowy: " << endl;
			cin >> x;

			if (x < 0)
			{
				cout << "Podana liczba jest ujemna! Wprowadz dane jeszcze raz. " << endl;
				
			}
			else
			{
				double z = x;
				cout << "Twoj wynik to: " << sqrt(z) << endl;
			}

		}

		if (operacja == 7)
		{
			cout << "Podaj pierwsza liczbe: " << endl;
			cin >> x;
			cout << "Podaj druga liczbe: " << endl;
			cin >> y;
			cout << "Twoj wynik to: " << x - y;
		}

		if (operacja == 8)
		{
			break;
		}
		
		else
		{
			cout << "Wybrana opcja jest niepoprawna, sprobuj ponownie!" << endl;
			break;
		}
		
		cout << endl << endl;
	}
	return 0;
}
