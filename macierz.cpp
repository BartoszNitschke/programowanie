#include <iostream>
using namespace std;

void m1(int); 
void m2(int);
void m3(int);
void m4(int);

int main()
{
    char wybor;
    int wybor1;
   
    cout << "Podaj wariant macierza (a,b,c,d) " << endl;
    cin >> wybor;
    cout << "Podaj wielkosc macierza (1-10)" << endl;
    cin >> wybor1;
    
    switch (wybor)
    {
    case 'a':
        m1(wybor1);
        break;
    case 'b':
        m2(wybor1);
        break;
    case 'c':
        m3(wybor1);
        break;
    case 'd':
        m4(wybor1);
        break;
    default:
        cout << "Zla opcja";
        break;

    }
    return 0;
}
void m1(int a)
{
    for (int y = 1; y <= a; y++)
    {
        int tmp = y;
        for (int x = 0; x < a; x++)
        {
            cout << tmp << " ";
            tmp++;
        }
        cout << endl;
    }
}
void m2(int a)
{
    int val = a;
    for (int y = 1; y <= val; y++)
    {
        for (int i = 0; i < val - y; i++)
        {
            cout << "0";
        }
        for (int i = 1; i <= y; i++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void m3(int a)
{
    int val = a;
    int tmp = 2;
    for (int y = 1; y <= val; y++)
    {
        for (int x = 2; x <= val * 2; x += 2)
        {
            int tmpv = x;
            while (tmpv < tmp)
            {
                tmpv += 2;
            }
            cout << tmpv;
        }
        tmp += 2;
        cout << endl;
    }
}
void m4(int a)
{
    int val = a;
    for (int y = 0; y < val; y++)
    {
        for (int i = val - y; i > -0; i--)
        {
            cout << i;
        }
        for (int i = 0; i < y; i++)
        {
            cout << "0";
        }
        cout << endl;
    }

}
