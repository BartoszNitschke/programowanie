#include <iostream>

using namespace std;

int main()
{
    int liczba,dzielnik = 0,licznik=0;

    cout << "Wprowadz liczbe: ";
    cin >> liczba;

   
    for (int i = 1; i <= liczba; i++)
    {
        if ((liczba % i) == 0)
        {
            dzielnik++;
           
        }
        licznik++;
    }

    if (dzielnik == 2)
        cout << liczba << " jest pierwsza" << endl;
    else
        cout << liczba << " nie jest pierwsza" << endl;

    cout << "Petle wykonano " << licznik << " razy" << endl;

    return 0;
}
