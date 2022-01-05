#include <iostream>

using namespace std;

int main()
{
	int tab[9] = { 0,0,0,0,0,0,0,0,0 };
	int kasa;
	int countdown;

	cout << "Jaka kwota chcesz zaplacic?" << endl;
	cin >> kasa;

	countdown = kasa;

	do
	{
	
		if (countdown>=500)
		{	
			tab[0]++;
			countdown = countdown - 500;
			continue;
		}
		if (countdown >= 200)
		{
			tab[1]++;
			countdown = countdown - 200;
			continue;
		}
		if (countdown >= 100)
		{
			tab[2]++;
			countdown = countdown - 100;
			continue;
		}
		if (countdown >= 50)
		{
			tab[3]++;
			countdown = countdown - 50;
			continue;
		}
		if (countdown >= 20)
		{
			tab[4]++;
			countdown = countdown - 20;
			continue;
		}
		if (countdown >= 10)
		{
			tab[5]++;
			countdown = countdown - 10;
			continue;
		}
		if (countdown >= 5)
		{
			tab[6]++;
			countdown = countdown - 5;
			continue;
		}
		if (countdown >= 2)
		{
			tab[7]++;
			countdown = countdown - 2;
			continue;
		}
		if (countdown >= 1)
		{
			tab[8]++;
			countdown = countdown - 1;
			continue;
		}
	} while (countdown != 0);

	cout << "Potrzebujesz " << tab[0] << " banknotow o nominale 500zl" << endl;
	cout << "Potrzebujesz " << tab[1] << " banknotow o nominale 200zl" << endl;
	cout << "Potrzebujesz " << tab[2] << " banknotow o nominale 100zl" << endl;
	cout << "Potrzebujesz " << tab[3] << " banknotow o nominale 50zl" << endl;
	cout << "Potrzebujesz " << tab[4] << " banknotow o nominale 20zl" << endl;
	cout << "Potrzebujesz " << tab[5] << " banknotow o nominale 10zl" << endl;
	cout << "Potrzebujesz " << tab[6] << " monet o nominale 5zl" << endl;
	cout << "Potrzebujesz " << tab[7] << " monet o nominale 2zl" << endl;
	cout << "Potrzebujesz " << tab[8] << " monet o nominale 1zl" << endl;
	

	return 0;
}
