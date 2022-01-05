#include <iostream>
#include <string>

using namespace std;

class Samochod
{
public:
	string marka;
	string model;
	int rok;
	double przebieg;
	double cenaw;
	double cenak;
	Samochod(string, string, int, double);	
	void Wypisz();
	void wyjsciowa();
	void koncowa();
	
};

int main()
{
	int wybor;

	cout << "Wybierz o ktorym aucie informacje chcesz uzyskac (Wprowadz 1-3)" << endl;
	cout << "                      Dostepne samochody:" << endl;
	cout << "================================================================" << endl;
	cout << "1. Ford focus" << endl;
	cout << "2. Toyota auris" << endl;
	cout << "3. Mazda 6" << endl << endl;

	cin >> wybor;

	if (wybor == 1)
	{
		Samochod* s1 = new Samochod("Ford", "Focus", 2012, 80000);
		s1->Wypisz();
		s1->wyjsciowa();
		s1->koncowa();
	}
	if (wybor == 2)
	{
		Samochod* s2 = new Samochod("Toyota", "Auris", 2018, 25000);
		s2->Wypisz();
		s2->wyjsciowa();
		s2->koncowa();
	}		
	if (wybor == 3)
	{
		Samochod* s3 = new Samochod("Mazda", "6", 2019, 12500);
		s3->Wypisz();
		s3->wyjsciowa();
		s3->koncowa();
	}
	if((wybor!=1)&&(wybor!=2)&&(wybor!=3))
		cout << "Wprowadzono niepoprawny znak!" << endl;
	
	return 0;
}
Samochod::Samochod(string marka,string model, int rok, double przebieg)
{
	this->marka = marka;
	this->model = model;
	this->rok = rok;
	this->przebieg = przebieg;
	
}
void Samochod::Wypisz()
{
	cout << "Marka: " << marka << endl;
	cout << "Model: " << model << endl;
	cout << "Rok produkcji: " << rok << endl;
	cout << "Przebieg: " << przebieg << endl << endl;
}
void Samochod::wyjsciowa()
{
	cout << "Podaj cene wyjsciowa samochodu: " << endl;
	cin >> cenaw;
	
}
void Samochod::koncowa()
{
	cenak = cenaw - (2022 - rok) * 10000 - przebieg * 3;
	if (cenak < 0)
		cenak = 0;
	cout << "Cena koncowa samochodu to: " << cenak << endl;

}
