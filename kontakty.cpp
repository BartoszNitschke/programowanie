#include <iostream>
#include<vector>
#include<string>

using namespace std;

int numer;
string nazwisko;
int lp;

vector<int>nrs;
vector<string>surnames;
vector<int>calls;

class kontakt
{
public:
    int nr;
    string surname;
    int call;
    //kontakt();
    bool dodaj(int,string,int);
    void zadzwon(string);
    void wyszukaj(int);
    void wypisz();
    void usun(int);
   
};

int main()
{
    kontakt book;
    int wybor=0;

    while (wybor != 6)
    {
        
        cout << "Wybierz opcje 1-6 z menu" << endl;
        cout << "==============================" << endl;
        cout << "1. Dodaj kontakt" << endl;
        cout << "2. Usun kontakt" << endl;
        cout << "3. Polacz" << endl;
        cout << "4. Wyszukaj kontakt" << endl;
        cout << "5. Wypisz liste kontaktow" << endl;
        cout << "6. Wyjdz z programu" << endl;
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            cout << "Podaj numer ktory chcesz dodac: " << endl;
            cin >> numer;
            cout << "Podaj nazwisko: " << endl;
            cin >> nazwisko;
            book.dodaj(numer, nazwisko, 0);           
        break;
        case 2:
            cout << "Podaj numer ktory chcesz usunac: " << endl;
            cin >> numer;
            book.usun(numer);           
            break;
        
        case 3:
        {
            cout << "Wybierz nazwisko, z ktorym chcesz sie polaczyc" << endl;
            cin >> nazwisko;
            book.zadzwon(nazwisko);          
            break;
        }
        case 4:
            cout << "Podaj numer do wyszukania: " << endl;
            cin >> numer;
            book.wyszukaj(numer);           
            break;
        case 5:
            book.wypisz();           
            break;  
        }                 
    }
    return 0;
}
bool kontakt::dodaj(int a,string b,int c)
{
    for (int i = 0; i < nrs.size(); i++)
    {
        if (a == nrs[i])
        {
            cout << "Numer juz istnieje!" << endl;
            return 0;
        }
        if (b == surnames[i])
        {
            cout << "Podana nazwa juz istnieje!" << endl;
            return 0;
        }
    }

    nrs.push_back(a);
    surnames.push_back(b);
    calls.push_back(c);

    cout << "Dodales kontakt:" << endl; // musi byc zmiana bo indeksy sie nie zgadzaja
    cout << "Nr telefonu: " << a << " Nazwisko: " << b << ", obecnie masz " << c << " polaczen z tym numerem" << endl << endl << endl;
}
void kontakt::zadzwon(string a)
{
    for (int i = 0; i < surnames.size(); i++)
    {
        if (a == surnames[i])
        {
            calls[i]++;
            cout << "Wykonales polaczenie do " << surnames[i] << " masz z nim " << calls[i] << " polaczen" << endl << endl;
            break;
        }
        else
            continue;
    }   
}
void kontakt::wyszukaj(int a)
{
    int prawda = 0;
    for (int i = 0; i < nrs.size(); i++)
    {
        if (a == nrs[i])
        {
            cout << "Pod numerem " << nrs[i] << " jest zapisany(a) " << surnames[i] << endl << endl;
            prawda++;
            break;
        }
       
    }
    if (prawda != 1)
        cout << "Nie znaleziono numeru" << endl << endl;
}
void kontakt::wypisz()
{
    for (int i = 0; i < surnames.size(); i++)
    {
        cout << surnames[i] << " Nr telefonu: " << nrs[i] << " liczba polaczen: " << calls[i] << endl;
    }
}
void kontakt::usun(int a)
{
    int licznik = 0;
    for (int i = 0; i < nrs.size(); i++)
    {
        if (a == nrs[i])
        {
            nrs.erase(nrs.begin() + i);
            surnames.erase(surnames.begin() + i);
            calls.erase(calls.begin() + i);
            licznik++;
            break;
        }
        else
            continue;
    }
    if (licznik == 1)
    {
        cout << "Usuwanie powiodlo sie" << endl << endl;
    }
    else
        cout << "Usuwanie nie powiodlo sie" << endl << endl;
}
