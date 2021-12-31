#include <iostream>
#include<conio.h>

using namespace std;
char tab[3][3];
void plansza();
char wynik;

bool check()
{
	
	
	for (int i = 0; i < 3; i++) //sprawdza  poziomo i pionowo
	{
		if ((tab[i][0]==tab[i][1] ) && (tab[i][2] == tab[i][1] )&&(tab[i][0]!='-'))
		{
			wynik = tab[i][0];
			return true;
		}
	
		if ((tab[0][i] == tab[1][i]) && (tab[2][i] == tab[1][i])&&(tab[0][i]!='-'))
		{
			wynik = tab[0][i];
			return true;
		}
	}
	
	if ((tab[0][0] == tab[1][1]) && (tab[2][2]==tab[1][1])&&(tab[0][0]!='-')) // przekatna z gory na dol
	{
		wynik = tab[0][0];
		return true;
	}
	if ((tab[0][2] ==tab[1][1]) && (tab[2][0] == tab[1][1])&&(tab[0][2]!='-')) // przekatna z dolu do gory
	{
		wynik = tab[0][2];
		return true;
	}
	

	return false;
}

bool remis(int test)
{
	int licznik = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (tab[i][j] != '-')
				licznik++;
			if (licznik == 9)
			{
				
				return true;

			}

		}
	}
	return false;
}



int main()
{
	int x, y;
	char wybor;
	int rundy = 0;
	for (int i = 0; i < 3; i++) //wypelnienie tablicy
	{
		for (int j = 0; j < 3; j++)
		{
			tab[i][j] = '-';

		}

	}


	
	
	cout << "Zaczyna X" << endl;

	for (;;) 
	{
		
		plansza();
		if (rundy % 2 == 0)
			wybor = 'x';
		else
			wybor = 'o';

		
		cout << "Ruch gracza " << wybor << endl;
		cout << "Wybierz pole gdzie chcesz zrobic ruch(pierwsza wspolrzedna 0-2): " << endl;
		cin >> x;

		if ((x < 0) || (x > 2))
		{
			cout << "Zla wartosc" << endl;
			system("pause");
			system("cls");
			continue;
		}
		else
			cout << "Druga wspolrzedna(0-2): " << endl;
		cin >> y;

		if ((y < 0) || (y > 2))
		{
			cout << "Zla wartosc" << endl;
			system("pause");
			system("cls");
			
			continue;
		}
		if ((tab[x][y] != '-'))
		{
			cout << "Pole juz zajete!" << endl;
			system("pause");
			system("cls");
			continue;
		}
		else
			tab[x][y] = wybor;
		system("cls");
		

		if (check())
		{
			cout << "Wygrywa: " << wynik << endl;
			break;
		}
		if (remis(true))
		{
			cout << "Remis!";
				break;
		}

		rundy++;
	}

	

}

void plansza() //rysowanie tablicy
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout.width(4);
			cout << tab[i][j];
		}
		cout << endl;

	}
}
