#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string>slowo;
string mot;

class word
{	public:
	bool dodaj(string);
	void usun(string);
	void wyszukaj(string);
	void wypisz();
	void alfabet();
};


int main()
{
	word a;
	int wybor=0;
	while (wybor != 6)
	{
		cout << "SLOWNIK" << endl;
		cout << "==================" << endl;
		cout << "Wybierz opcje (1-6): " << endl;
		cout << "1. Dodaj slowo" << endl;
		cout << "2. Usun slowo" << endl;
		cout << "3. Wyszukaj slowo" << endl;
		cout << "4. Wypisz zawartosc slownika" << endl;
		cout << "5. Sortuj alfabetycznie" << endl;
		cout << "6. Wyjdz" << endl;
		cin >> wybor;

		switch (wybor)
		{
		case 1:
			cout << "Jakie slowo chcesz dodac? " << endl;
			cin >> mot;
			a.dodaj(mot);
			break;
		case 2:
			cout << "Jakie slowo chcesz usunac? " << endl;
			cin >> mot;
			a.usun(mot);
			break;
		case 3:
			cout << "Jakie slowo chcesz wyszukac? " << endl;
			cin >> mot;
			a.wyszukaj(mot);
			break;
		case 4:
			a.wypisz();
			break;
		case 5:
			a.alfabet();
			break;
		default:
			break;
		}
		
	}
}

bool word::dodaj(string a)
{
	for (int i = 0; i < slowo.size(); i++)
	{
		if (a == slowo[i])
		{
			cout << "Slowo juz istnieje!" << endl;
			return 0;
		}
	}
	slowo.push_back(a);
	cout << "Dodales slowo " << a << " do slownika" << endl;
}
void word::usun(string a)
{
	int licznik = 0;
	for (int i = 0; i < slowo.size(); i++)
	{
		if (a == slowo[i])
		{
			slowo.erase(slowo.begin() + i);
			licznik++;
			break;
		}
		else
			continue;
	}
	if (licznik == 1)
		cout << "Usunieto slowo " << a << endl;
	else
		cout << "Usuwanie nie powiodlo sie" << endl;

}
void word::wyszukaj(string a)
{
	int prawda = 0;
	for (int i = 0; i < slowo.size(); i++)
	{
		if (a == slowo[i])
		{
			cout << "Znaleziono slowo " << a << endl;
			prawda++;
			break;
		}
	}
	if (prawda != 1)
		cout << "Nie znaleziono slowa "<<a << endl << endl;

}
void word::wypisz()
{
	for (int i = 0; i < slowo.size(); i++)
	{
		cout << slowo[i] << endl;
	}
}
void word::alfabet()
{
	sort(slowo.begin(), slowo.end());
}
