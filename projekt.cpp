#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

string l;
string h;
string im;
string n;
string num;
double s;
int identity=0;
int id1;

vector<string>login;
vector<string>haslo;
vector<string>imie;
vector<string>nazwisko;
vector<double>stan;
vector<string>nr;
vector<int>id;
vector<double>credit;
vector<double>investment;
vector<int>ilosclokat;
vector<double>dolary;
vector<double>euro;
vector<double>funty;
vector<double>ruble;
vector<double>korony;

void wczytaj(string);
int interfejs();
void interfejs2();
bool zaloguj();
int stworz();
bool przelew();
bool kantor();
bool kredyt();
bool lokata();
bool lotto();
bool menuwalut(double);
bool menuwalut2();

int main()
{
    wczytaj("user1.txt");
    wczytaj("user2.txt");
    if (interfejs() == 2)
        return 0;

}
void wczytaj(string file)
{
    string login2, haslo2, imie2, nazwisko2, nrkonta2;
    double stan2, credit2, investment2, dolary2, euro2, funty2, ruble2, korony2;
    int lokaty2;

    fstream plik;
    plik.open(file, ios::in);

    if (plik.good() == false)
    {
        cout << "Plik nie istnieje!";
        exit(0);
    }

    string linia;
    int nr_linii = 1;
    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
        case 1: login2 = linia; break;
        case 2: haslo2 = linia; break;
        case 3: imie2 = linia; break;
        case 4: nazwisko2 = linia; break;
        case 5: stan2 = stod(linia.c_str()); break;
        case 6: nrkonta2 = linia; break;
        case 7: credit2 = stod(linia.c_str()); break;
        case 8: investment2 = stod(linia.c_str()); break;
        case 9: lokaty2 = stoi(linia.c_str()); break;
        case 10: dolary2 = stod(linia.c_str()); break;
        case 11: euro2 = stod(linia.c_str()); break;
        case 12: funty2 = stod(linia.c_str()); break;
        case 13: ruble2 = stod(linia.c_str()); break;
        case 14: korony2 = stod(linia.c_str()); break;
                        
        }
        nr_linii++;
    }


    plik.close();

    login.push_back(login2);
    haslo.push_back(haslo2);
    imie.push_back(imie2);
    nazwisko.push_back(nazwisko2);
    stan.push_back(stan2);
    nr.push_back(nrkonta2);
    id.push_back(identity);
    credit.push_back(credit2);
    investment.push_back(investment2);
    ilosclokat.push_back(lokaty2);
    dolary.push_back(dolary2);
    euro.push_back(euro2);
    funty.push_back(funty2);
    ruble.push_back(ruble2);
    korony.push_back(korony2);

    identity++;
}
int stworz()
{
    string imie1;
    string nazwisko1;
    string login1;
    string haslo1;
    string nr1;
     
    cout << "Tworzenie konta" << endl;
    cout << "=====================" << endl << endl;
    cout << "Wprowadz imie: " << endl;
    cin >> imie1;
    cout << "Wprowadz nazwisko: " << endl;
    cin >> nazwisko1;
    cout << "Wprowadz login: " << endl;
    cin >> login1;
    cout << "Wprowadz haslo: " << endl;
    cin >> haslo1;
    cout << "Wprowadz swoj nowy numer konta (8 cyfr): " << endl;
    cin >> nr1;

        for (int i = 0; i < login.size(); i++)
        {
            if (login1 == login[i])
            {
                cout << "Podany login juz istnieje!" << endl;
                system("pause");
                system("cls");
                return 0;
            }
            if (nr1 == nr[i])
            {
                cout << "Podany numer konta juz istnieje!" << endl;
                system("pause");
                system("cls");
                return 0;
            }
            
        }
        if (haslo1.length() < 4)
        {
            cout << "Haslo musi miec minimum 4 znaki!" << endl;
            system("pause");
            system("cls");
            return 0;
        }
        if (nr1.length() != 8)
        {
            cout << "Wprowadzono nieodpowiednia dlugosc numeru konta!" << endl;
            system("pause");
            system("cls");
            return 0;
        }
 
    login.push_back(login1);
    haslo.push_back(haslo1);
    imie.push_back(imie1);
    nazwisko.push_back(nazwisko1);
    stan.push_back(500);
    nr.push_back(nr1);
    id.push_back(identity);
    credit.push_back(0);
    investment.push_back(0);
    ilosclokat.push_back(0);
    dolary.push_back(0);
    euro.push_back(0);
    funty.push_back(0);
    ruble.push_back(0);
    korony.push_back(0);
    
    identity++;
    cout << endl << "Witaj w rBanku "<<imie1<<" "<<nazwisko1 << endl << endl;
    system("pause");
    system("cls");
}



bool zaloguj()
{
    
    int warunek = 0;
    string login2;
    string haslo2;
    do
    {
        system("cls");
        cout << "Logowanie" << endl;
        cout << "=======================" << endl;
        cout << "Login: ";
        cin >> login2;
        cout << "Haslo: ";
        cin >> haslo2;
        cout << endl;

        for (int i = 0; i < login.size(); i++)
        {
            if ((login[i] == login2) && (haslo[i] == haslo2))
            {
                warunek++;
                cout << "Gratulacje, zalogowales sie!" << endl << endl;
                l = login[i];
                h = haslo[i];
                im = imie[i];
                n = nazwisko[i];
                s = stan[i];
                num = nr[i];
                id1 = id[i];
                system("pause");
                system("cls");
                return true;

            }
           
        }
        cout << "Zly login lub haslo, sprobuj ponownie" << endl << endl;
        system("pause");
        system("cls");
    }
    while (warunek != 1);
  
}


bool przelew()
{
    float kwota;
    string adresat;
    int sprawdz = 0;
    char choice;
    cout << "Jaka kwote chcesz przelac: " ;
    cin >> kwota;
    cout << "Wypisz adresata: ";
    cin >> adresat;

    if (kwota > s)
    {
        cout << "Brak srodkow na koncie" << endl << endl;
        system("pause");
        system("cls");
        return 0;
    }
    cout << "Na pewno wykonac przelew? (T/N)" << endl;
    cin >> choice;

    if ((choice == 'N') || (choice == 'n'))
    {
        cout << "Anulowano przelew!" << endl;
        system("pause");
        system("cls");
        return 0;
    }

    for (int i = 0; i < login.size(); i++)
    {
        if (adresat == nr[i])
        {
           
            stan[i] =stan[i]+ kwota;
            stan[id1] = stan[id1] - kwota;
            cout << "Przelano " << kwota << " PLN do " << imie[i] << " " << nazwisko[i] << endl;
            sprawdz = 1;
            system("pause");
            system("cls");
            break;
        }
        
    }
    if (sprawdz != 1)
    {
        stan[id1] = stan[id1] - kwota;
        cout << "Przelano " << kwota << endl;
        system("pause");
        system("cls");
      
    }



}
int interfejs()
{
    int wybor=0;
    string adminn;

    while (wybor != 4)
    {
        cout << "rBank" << endl;
        cout << "====================" << endl;
        cout << "Wybierz nr opcji: " << endl;
        cout << "1. Stworz konto" << endl;
        cout << "2. Zaloguj" << endl;
        cout << "3. Wypisz wszystkich uzytkownikow (opcja dla administratora)" << endl;
        cout << "4. Wyjdz" << endl;
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            stworz();
            break;
        case 2:
            
            if (zaloguj() == true)
            {
                interfejs2();
            }
            break;
        case 3:
            
            cout << "Podaj haslo administratora: ";
            cin >> adminn;
            cout << endl;

            if (adminn == "admin")
            {
                for (int i = 0; i < login.size(); i++)
                {
                    cout << imie[i] << " " << nazwisko[i] << " " << login[i] << " " << haslo[i] << " " << stan[i] << " " << nr[i] << " " << id[i] << endl;
                }
            }
            else
            {
                cout << "Zle haslo!" << endl;
            }
            system("pause");
            system("cls");
            break;
        case 4:
            return 2;
            break;

        default:
            cout << "Wybrana opcja jest nieprawidlowa!" << endl;
            break;
        }
    }
     
    

}
void interfejs2()
{
    int koniec = 0;
    int wybor=0;
    while (koniec != 24)
    {
        system("cls");
        cout << "Uzytkownik: " << im << " " << n << endl;
        cout << "Saldo: " << stan[id1] << " PLN" << endl;
        cout << "===================================" << endl;
        cout << "Wybierz opcje: " << endl;
        cout << "1. Wyswietl dane o koncie" << endl;
        cout << "2. Wykonaj przelew" << endl;
        cout << "3. Kredyt" << endl;
        cout << "4. Lokata" << endl;
        cout << "5. Lotto" << endl;
        cout << "6. Kantor" << endl;
        cout << "7. Ustawienia konta" << endl;
        cout << "8. Wyloguj" << endl;
        cin >> wybor;
        system("cls");

        switch (wybor)
        {
        case 1:
            cout << im << " " << n << " " << l << " " << h << " " << stan[id1]<<" PLN" << " " << id1 << endl << endl;
            system("pause");
            break;
        case 2:
            przelew();
            break;
        case 3:
            kredyt();
            break;
        case 4:
            lokata();
            break;
        case 5:
            lotto();
            break;
        case 6:
            kantor();
            break;
        case 7:

        case 8:
            char choice;
            cout << "Czy na pewno chcesz sie wylogowac? (T/N)" << endl;
            cin >> choice;

            if ((choice == 'T') || (choice == 't'))
            {
                cout << "Wylogowanie nastapilo pomyslnie!" << endl << endl;
                koniec = 24;
                system("pause");
                system("cls");

            }
            if ((choice == 'N') || (choice == 'n'))
            {
                cout << "Pozostales na swoim koncie" << endl << endl;
                system("pause");
                system("cls");
            }
            break;
        default:
            cout << "Wprowadzona opcja jest niepoprawna!" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}
bool kredyt()
{
    float wybor;
    int wybor1=0;
    char choice;

    while (wybor1 != 3)
    {
        system("cls");
        cout << "MENU KREDYTOWE" << endl;
        cout << "=============================" << endl;
        cout << "Do splaty kredytu pozostalo " << credit[id1] << endl;
        cout << "1. Wez kredyt" << endl;
        cout << "2. Splac kredyt" << endl;
        cout << "3. Wyjdz" << endl;
        cin >> wybor1;

        
        if (wybor1 == 1)
        {
            cout << "Ile pieniedzy chcesz wziac na kredyt: (od 10 do 200tys.)" << endl;
            cout << "Oprocentowanie wynosi 20%" << endl;
            cin >> wybor;
            system("cls");

            if (credit[id1]+wybor > 200000)
            {
                cout << "Masz juz za duzy kredyt, splac poprzedni" << endl;
                system("pause");
                system("cls");
                continue;
            }
            if ((wybor > 200000) || (wybor < 10000))
            {
                cout << "Wprowadzona kwota jest nieprawidlowa!" << endl;
                system("pause");
                system("cls");
                continue; 
            }
            cout << "Czy na pewno chcesz wziac kredyt na " << wybor << " ? (T/N)" << endl;
            cin >> choice;
            system("cls");

            if ((choice == 'T') || (choice == 't'))
            {
                
                stan[id1] = stan[id1] + wybor;
                credit[id1] += wybor * 1.2;
                cout << "Wzieto kredyt na " << wybor << " PLN. Nalezne do zaplaty to " << credit[id1] << " PLN" << endl;
                system("pause");
                system("cls");
            }
            if ((choice == 'N') || (choice == 'n'))
            {
                cout << "Anulowales kredyt" << endl;
                system("pause");
                system("cls");
                continue;
            }
        }
        if(wybor1==2)
        {    cout << "Ile pieniedzy chcesz splacic? " << endl;
            cin >> wybor;
            system("cls");
            if (wybor > stan[id1])
            {
                cout << "Brak wystarczajacych srodkow na koncie" << endl;
                system("pause");
                system("cls");
                continue;
            }
            else
            {
                char splata;
                cout << "Czy na pewno chcesz dokonac splaty? (T/N)";
                cin >> splata;
                system("cls");
                if ((splata == 'T') || (splata == 't'))
                {
                    stan[id1] = stan[id1] - wybor;
                    credit[id1] = credit[id1] - wybor;
                    cout << "Do splaty kredytu pozostalo " << credit[id1] << endl;
                    system("pause");
                    system("cls");
                    continue;
                }
                if ((splata == 'N') || (splata == 'n'))
                {
                    cout << "Anulowano splate!" << endl;
                    system("pause");
                    system("cls");
                    continue;
                }
            }
        }
            
        if (wybor1 == 3)
        {   
            system("cls");
            return 0;
        }
       
        }
    }

bool lokata()
{
    int wybor=0;
    float kwota;
    float lata;
    char choice;
    
    while (wybor != 3)
    {
        system("cls");
        cout << "MENU LOKATOWE" << endl;
        cout << "=============================" << endl;
        cout << "Srodki dostepne na lokacie:  " << investment[id1] << endl;
        cout << "1. Wplac srodki na lokate" << endl;
        cout << "2. Wyplac srodki" << endl;
        cout << "3. Wyjdz" << endl;
        cin >> wybor;
        system("cls");

        if (wybor == 1)
        {
            cout << "Masz obowiazek wyplacic pieniadze z lokaty, zanim wezmiesz poprzednia" << endl;
            cout << "Jakie srodki chcesz wplacic na lokate (kwota przechowywana na lokacie zwieksza sie o 1% rocznie): " << endl;
            cin >> kwota;
            cout << "Po ilu latach chcesz wyciagnac pieniadze (1-30 lat): " << endl;
            cin >> lata;
            system("cls");

            if (kwota > stan[id1])
            {
                cout << "Brak podanej kwoty na koncie!" << endl;
                system("pause");
                system("cls");
                continue;
            }
            if ((lata >= 30) && (lata <= 1))
            {
                cout << "Podany czas przechowywania pieniedzy jest nieprawidlowy" << endl;
                system("pause");
                system("cls");
                continue;
            }
            if (ilosclokat[id1] == 1)
            {
                cout << "Obecnie masz juz aktywna lokate" << endl;
                system("pause");
                system("cls");
                continue;
            }
            investment[id1] += kwota +kwota* (lata * 0.01);
            stan[id1] = stan[id1] - kwota;
            ilosclokat[id1] = 1;
            cout << "Lokata rozpoczeta" << endl;
            system("pause");
            system("cls");

        }
        if (wybor == 2)
        {
            cout << "Czy chcesz wyplacic srodki z lokaty i przeniesc je na twoje saldo? (T/N)" << endl;
            cin >> choice;
            system("cls");
            if ((choice == 'T') || (choice == 't'))
            {
                stan[id1] += investment[id1];
                investment[id1] = 0;
                cout << "Przeniesiono srodki z lokaty na twoje saldo" << endl;
                system("pause");
                system("cls");
                   
            }
            if ((choice == 'N') || (choice == 'n'))
            {
                cout << "Anulowano wyplacanie srodkow z lokaty" << endl;
                system("pause");
                system("cls");
                continue;
            }
        }
        if (wybor == 3)
            return 0;
    }
}
bool lotto()
{
    char choice;
    system("cls");
    cout << "Witaj w lotto!" << endl;
    cout << "=============================" << endl;
    cout << "Wejscie kosztuje 5zl, czy chcesz kontynuowac? (T/N)" << endl;
    cin >> choice;

    if ((choice == 'N') || (choice == 'n'))
    {
        system("cls");
        return 0;
    }
    stan[id1] -= 5;

    system("cls");

    int kupon[6];
    cout << "Podaj 6 roznych liczb z zakresu od 1 - 49" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Podaj " << i + 1 << " liczbe:";
        cin >> kupon[i];
    }
    srand(time(NULL));
    int los[6];
    bool powtorzenia;
    for (int i = 0; i < 6; i++)
    {
        powtorzenia = true;
        while (powtorzenia)
        {
            powtorzenia = false;
            los[i] = rand() % 49 + 1;
            for (int j = 0; j < i; j++)
                if (los[i] == los[j])
                {
                    powtorzenia = true;
                    break;
                }

        }

    }
    cout << "Wylosowane liczby to:" << endl << endl;
    for (int i = 0; i < 6; i++)
        cout << los[i] << " ";
    int licznik = 0;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (kupon[i] == los[j])
            {
                licznik++;
                break;
            }
    cout << endl << endl << "Wytypowales dobrze " << licznik << " liczb" << endl << endl;

    if ((licznik == 0) || (licznik == 1) || (licznik == 2))
    {
        cout << "Nic nie wygrywasz!" << endl;
        system("pause");
        system("cls");
    }

    if (licznik == 3)
    {
        cout << "Wygrywasz 20zl!" << endl;
        stan[id1] += 20;
        system("pause");
        system("cls");
    }
    if (licznik == 4)
    {
        cout << "Wygrywasz 120zl!" << endl;
        stan[id1] += 120;
        system("pause");
        system("cls");
    }
    if (licznik == 5)
    {
        cout << "Wygrywasz 1200zl!" << endl;
        stan[id1] += 1200;
        system("pause");
        system("cls");
    }
    if (licznik == 6)
    {
        cout << "Wygrywasz 20 000 000 zl!" << endl;
        stan[id1] += 20000000;
        system("pause");
        system("cls");
    }
}
bool kantor()
{
    int wybor=0;
    while (wybor != 4)
    {
        system("cls");
        cout << "MENU KANTORA" << endl;
        cout << "============================" << endl;
        cout << "1. Wyswietl informacje o posiadanych walutach" << endl;
        cout << "2. Wymien PLN na inna walute" << endl;
        cout << "3. Wymien inna walute na PLN" << endl;
        cout << "4. Wyjdz" << endl;
        cin >> wybor;
        system("cls");

        switch (wybor)
        {
        case 1:
            cout << "Posiadane waluty: " << endl;
            cout << "===========================" << endl;
            cout << stan[id1] << " PLN" << endl;
            cout << dolary[id1] << " USD" << endl;
            cout << euro[id1] << " EUR" << endl;
            cout << funty[id1] << " GBP" << endl;
            cout << ruble[id1] << " RUB" << endl;
            cout << korony[id1] << " CZK" << endl << endl;
            system("pause");
            break;
        case 2:
            double ile;
            cout << "Ile PLN chcesz wymienic?" << endl;
            cin >> ile;
            system("cls");

            if (ile > stan[id1])
            {
                cout << "Niewystarczajace srodki na koncie" << endl;
                system("pause");
                system("cls");
                break;
            }
            menuwalut(ile);
            break;
        case 3:
            menuwalut2();
            break;
        case 4:
            return 0;
        }

    }
}
bool menuwalut(double kasa)
{
    int wybor;
    char choice;
    system("cls");
    cout << "Wybierz walute: " << endl;
    cout << "1. Dolary - USD" << endl;
    cout << "2. Euro - EUR" << endl;
    cout << "3. Funty - GBP" << endl;
    cout << "4. Ruble - RUB" << endl;
    cout << "5. Korony czeskie - CZK" << endl;
    cout << "6. Anuluj" << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << "Otrzymasz " << kasa * 0.25 << " USD" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            dolary[id1] = dolary[id1] + (kasa * 0.25);
            stan[id1] = stan[id1] - kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 2:
        cout << "Otrzymasz " << kasa * 0.22 << " EUR" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            euro[id1] = euro[id1] + (kasa * 0.22);
            stan[id1] = stan[id1] - kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 3:
        cout << "Otrzymasz " << kasa * 0.18 << " GBP" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            funty[id1] = funty[id1] + (kasa * 0.18);
            stan[id1] = stan[id1] - kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 4:
        cout << "Otrzymasz " << kasa * 19.18 << " RUB" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            ruble[id1] = ruble[id1] + (kasa * 19.18);
            stan[id1] = stan[id1] - kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 5:
        cout << "Otrzymasz " << kasa * 5.39 << " CZK" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            korony[id1] = korony[id1] + (kasa * 5.39);
            stan[id1] = stan[id1] - kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 6:
        system("cls");
        return 0;
    }
}
bool menuwalut2()
{
    int wybor;
    char choice;
    double kasa;
    system("cls");
    cout << "Wybierz walute ktora chcesz wymienic na PLN: " << endl;
    cout << "1. Dolary - USD" << endl;
    cout << "2. Euro - EUR" << endl;
    cout << "3. Funty - GBP" << endl;
    cout << "4. Ruble - RUB" << endl;
    cout << "5. Korony czeskie - CZK" << endl;
    cout << "6. Anuluj" << endl;
    cin >> wybor;
    system("cls");
    switch (wybor)
    {
    case 1:
        cout << "Ile USD chcesz zamienic na PLN?" << endl;
        cin >> kasa;
        system("cls");
        if (kasa > dolary[id1])
        {
            cout << "Wprowadzono nieprawidlowa kwote!" << endl;
            system("pause");
            system("cls");
            break;
        }
        cout << "Otrzymasz " << kasa * 4.00 << " PLN" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            stan[id1] += kasa * 4.00;
            dolary[id1] -= kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 2:
        cout << "Ile EUR chcesz zamienic na PLN?" << endl;
        cin >> kasa;
        system("cls");
        if (kasa > euro[id1])
        {
            cout << "Wprowadzono nieprawidlowa kwote!" << endl;
            system("pause");
            system("cls");
            break;
        }
        cout << "Otrzymasz " << kasa * 4.53 << " PLN" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            stan[id1] += kasa * 4.53;
            euro[id1] -= kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 3:
        cout << "Ile GBP chcesz zamienic na PLN?" << endl;
        cin >> kasa;
        system("cls");
        if (kasa > funty[id1])
        {
            cout << "Wprowadzono nieprawidlowa kwote!" << endl;
            system("pause");
            system("cls");
            break;
        }
        cout << "Otrzymasz " << kasa * 5.44 << " PLN" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            stan[id1] += kasa * 5.44;
            funty[id1] -= kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 4:
        cout << "Ile RUB chcesz zamienic na PLN?" << endl;
        cin >> kasa;
        system("cls");
        if (kasa > ruble[id1])
        {
            cout << "Wprowadzono nieprawidlowa kwote!" << endl;
            system("pause");
            system("cls");
            break;
        }
        cout << "Otrzymasz " << kasa * 0.52 << " PLN" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            stan[id1] += kasa * 0.052;
            ruble[id1] -= kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 5:
        cout << "Ile CZK chcesz zamienic na PLN?" << endl;
        cin >> kasa;
        system("cls");
        if (kasa > korony[id1])
        {
            cout << "Wprowadzono nieprawidlowa kwote!" << endl;
            system("pause");
            system("cls");
            break;
        }
        cout << "Otrzymasz " << kasa * 0.19 << " PLN" << endl;
        cout << "Czy na pewno chcesz wykonac operacje? (T/N)";
        cin >> choice;
        system("cls");
        if ((choice == 'T') || (choice == 't'))
        {
            stan[id1] += kasa * 0.19;
            korony[id1] -= kasa;
            cout << "Operacja przebiegla pomyslnie!" << endl << endl;
            system("pause");
            system("cls");
            break;
        }
        if ((choice == 'N') || (choice == 'n'))
            break;
    case 6:
        return 0;
    }

}

//AUTORZY BARTOSZ NITSCHKE, SZYMON NOWICKI
