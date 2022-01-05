#include <iostream>
#include <math.h>

using namespace std;

class trojkat
{
public:
	double a;
	double b;
	double c;
	trojkat(int, int, int);
	void sprawdz();
};

int main()
{
	int wybor;

	cout << "Wybierz o ktorym trojkacie informacje chcesz uzyskac (Wprowadz 1-4)" << endl;
	cout << "                      Dostepne trojkaty:" << endl;
	cout << "================================================================" << endl;
	cout << "1. (6,2,7)" << endl;
	cout << "2. (4,5,6)" << endl;
	cout << "3. (6,8,10)" << endl;
	cout << "4. (1,1,7)" << endl << endl;

	cin >> wybor;

	
	if (wybor == 1)
	{
		trojkat* t1 = new trojkat(6, 2, 7);
		t1->sprawdz();
	}
	if (wybor == 2)
	{
		trojkat* t2 = new trojkat(4, 5, 6);
		t2->sprawdz();
	}
	if (wybor == 3)
	{
		trojkat* t3 = new trojkat(6, 8, 10);
		t3->sprawdz();
	}
	if (wybor == 4)
	{
		trojkat* t4 = new trojkat(1, 1, 7);
		t4->sprawdz();
	}
	if ((wybor != 1) && (wybor != 2) && (wybor != 3)&&(wybor!=4))
		cout << "Wprowadzono niepoprawny znak!" << endl;

	return 0;
}
void trojkat::sprawdz()
{
	double aa = pow(a, 2); //ustalanie poteg bokow do pozniejszego sprawdzenia warunku
	double bb = pow(b, 2);
	double cc = pow(c, 2);

	if (a + b > c) //warunki
	{
		if (cc > (aa + bb))
			cout << "Trojkat jest rozwartokatny" << endl;
		if (cc == (aa + bb))
			cout << "Trojkat jest prostokatny" << endl;
		if (cc < (aa + bb))
			cout << "Trojkat jest ostrokatny" << endl;
	}
	else
	{
		cout << "Trojkat nie ma prawa istniec" << endl;
	}
}
trojkat::trojkat(int b1,int b2,int b3)
{
	this->a = b1;
	this->b = b2;
	this->c = b3;
}
