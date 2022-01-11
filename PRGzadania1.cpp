//ZADANIE 1

#include <iostream>

using namespace std;

void funkcja()
{
    int mniejsza = 2, wieksza = 20, i;
    bool pierwsza = true;


    while (mniejsza < wieksza)
    {
        pierwsza = true;

        for (i = 2; i <= mniejsza / 2; ++i)
        {
            if (mniejsza % i == 0) {
                pierwsza = false;
                break;
            }
        }


        if (pierwsza)
            cout << mniejsza << " ";

        ++mniejsza;
    }

    cout << endl;
}


int main() 
{
    funkcja();
    funkcja();

    return 0;
}

//ZADANIE 2

#include <iostream>

using namespace std;

int main()
{
	string imie = "Random";
	double waga = 77;
	int wzrost = 184;

	cout << "Imie: " << imie << endl << endl;
	cout << "Waga: " << waga << '\n' << '\n';
	cout << "Wzrost: " << wzrost << endl;




}

//ZADANIE 3

#include <iostream>

using namespace std;

int main()
{
	string a, b;

	cout << "Wprowadz 1 imie: " << endl;
	cin >> a;
	cout << "Wprowadz 2 imie: " << endl;
	cin >> b;

	int dlugosca = a.length();
	int dlugoscb = b.length();

	if (dlugosca > dlugoscb)
	{
		cout << "Pierwsze imie jest dluzsze!" << endl;
	}
	if (dlugosca < dlugoscb)
	{
		cout << "Drugie imie jest dluzsze..." << endl;
	}
	if(dlugosca==dlugoscb)
	{
		cout << "Imiona maja jednakowa dlugosc." << endl;
	}



	return 0;
}

//ZADANIE 4

#include <iostream>

using namespace std;

int main()
{
	int kobieta = 0;
	int mezczyzna = 0;

	for (int i = 0; i < 5; i++)
	{
		string imie;
		
		cout << "Podaj imie: ";
		cin >> imie;

		int dlugosc = imie.length();
		
		if (imie[dlugosc - 1] == 'a')
			kobieta++;
		else
			mezczyzna++;

	}
	cout << "Podales " << kobieta << " kobiet" << endl;
	cout << "Podales " << mezczyzna << " mezczyzn" << endl;


}

//ZADANIE 5

#include <iostream>

using namespace std;

bool is_even(int a)
{
    if (a % 2 == 0)
        return true;
    else
        return false;
}


int main()
{
    int a;

    cout << "Podaj liczbe: " << endl;
    cin >> a;

    cout << is_even(a) << endl;
}

//ZADANIE 6

#include <iostream>

using namespace std;

bool is_divisible(int a, int b)
{
    if (a % b == 0)
        return true;
    else
        return false;
}

bool is_even(int a)
{
     if (is_divisible(a,2))
        return true;
    else
        return false;

}

int main()
{
    int a;
    int b;

    cout << "Podaj 1 liczbe: " << endl;
    cin >> a;
    cout << "Podaj 2 liczbe: " << endl;
    cin >> b;

    cout << is_even(a) << endl;
}


//ZADANIE 7

#include <iostream>
#include <string>

using namespace std;

int count_chars(string s, char c)
{
	int licznik = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == c)
		{
			licznik++;
		}

	}
	return licznik;
}


int main()
{
	string s; 
	char c;

	cout << "Wprowadz slowo: " << endl;
	cin >> s;
	cout << "Wprowadz znak: " << endl;
	cin >> c;

	cout << count_chars(s, c);
	  
}

//ZADANIE 8

#include <iostream>
#include <string>
using namespace std;

void funkcja(int n,string s)
{
    string tekst;

    for (int i = 0; i <s.length(); i+=n)
    {
        tekst += s[i];
        
    }
    cout << tekst << endl;

}



int main()
{
    int n;
    string s;

    cout << "Podaj slowo: " << endl;
    cin >> s;
    cout << "Co ile znakow wypisac litere: " << endl;
    cin >> n;

    funkcja(n,s);

	return 0;
}


//ZADANIE 9

#include <iostream>
#include <string>
using namespace std;

void is_palindrome(string s)
{
    string rev;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];

    }
    if (rev._Equal(s))
    
        cout << "Palindrom";   
    else
        cout << "Nie jest palindromem";
}


int main()
{
    string tekst;
    
    cout << "Wprowadz slowo: " << endl;
    cin >> tekst;

    is_palindrome(tekst);

    return 0;
}

//ZADANIE 10

#include <iostream>

using namespace std;

string s(string);
string box_print(string, string, string, string, string);

int main()
{
    cout << box_print("jest","tu","sobie","taka","ramka");
}

string s(string w)
{
    string a;
    a += "* ";
    a += w;
    int b = (8 - a.length()) - 2;
    if (b > 0)
    {
        for (int i = 0; i <= b; i++)
        {
            a += " ";

        }
    }

    a += "*";
    return a;
}

string box_print(string a, string b, string c, string d, string e)
{
    cout << "********" << endl;
    cout << s(a) << endl;
    cout << s(b) << endl;
    cout << s(c) << endl;
    cout << s(d) << endl;
    cout << s(e) << endl;
    cout << "********" << endl;

    return " ";
}
