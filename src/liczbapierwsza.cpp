#include <iostream>

using namespace std;

int liczba;


bool pierwsza(int n,int ilosc)
{
        if(n<2)
        return false;

        for(int i=2,i*i<=n,i++)
        {
        if(n%i=0) return false;
        ilosc=i-1;
        }

        return true;
}


int main()
{
        cout<<"Podaj liczbe: "<<endl;
        cin>>liczba;

        if(pierwsza(n))
        {cout<<"Liczba "<<n<<" jest pierwsza"<<endl;}
        else
        {cout<<"Liczba "<<n<<" nie jest pierwsza"<<endl;}

        cout<<"Petla wykonana zostala "<<ilosc<<" razy"<<endl;


        }

        return 0;
}
