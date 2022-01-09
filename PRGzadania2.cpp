//ZADANIE 1

#include <iostream>
#include <vector>

using namespace std;

float average_of(vector<int>& vec)
{
    float suma = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        suma += vec[i];
    }
   
    return suma / vec.size();

}


int main()
{
    auto tmp = vector<int>{ 6,8,1,3,4 };
    cout<<average_of(tmp);
    
}

//ZADANIE 2

#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(string);

string filter_palindromes(vector<string>& vec)
{
    vector<string>tmp;
    
    for (int i = 0; i < vec.size(); i++)
    {
        is_palindrome(vec[i]);
        if (is_palindrome(vec[i]) == 1)
            tmp.push_back(vec[i]);
        else
            continue;
    }
    for (auto i = 0; i < tmp.size(); i++) 
    {
        cout << tmp[i] << ' ';
    }
          
    return "palindrom";
}

bool is_palindrome(string s)
{
    string rev;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];

    }
    if (rev._Equal(s))
        return 1;
    else
        return 0;
}


int main()
{
    auto tmp = vector<string>{ "kajak","ala","kot","slowo","kek" };
    filter_palindromes(tmp);
    
    return 0;
}

//ZADANIE 3

#include <iostream>
#include <vector>

using namespace std;

int dot_product(vector<int>& vec,vector<int>& vec1)
{
    int iloczyn=0;
    if (vec.size() == vec1.size())
    {
        for (auto i = 0; i < vec.size(); i++)
        {
            iloczyn += vec[i] * vec1[i];
        }
        return iloczyn;
    }
    else
    {
        cout << "Wektory nie maja tej samej dlugosci";
            return 0;
    }
        
}

int main()
{
    auto tmp = vector<int> { 1,3,5,7};
    auto tmp1 = vector<int>{ 2,4,5,6 };

    cout << dot_product(tmp, tmp1);
}

//ZADANIE 4

#include <iostream>
#include <vector>

using namespace std;

struct student
{
    string imie;
    string nazwisko;
    vector<int>oceny;   
};

float average_of(student a)
{
    float suma = 0;
    for (int i = 0; i < a.oceny.size(); i++)
    {
        suma += a.oceny[i];
    }

    return suma / a.oceny.size();

}

int main()
{
    student stud;
    stud.imie = "Adam";
    stud.nazwisko = "Mickiewicz";
    stud.oceny = { 2,3,4,5 };

    cout << average_of(stud);
    
}

//ZADANIE 7

#include <iostream>
#include <vector>

using namespace std;

struct group
{
    string nazwa;
    vector<string>studenci;
};

void add_student(group a,string s)
{
    auto studs = a.studenci;
    studs.push_back(s);
    
}

int main()
{
    group grupa;
    grupa.nazwa = "Mistrze";
    grupa.studenci = { "Jankowski","Kowalski","Nowak" };
    
    auto studs = grupa.studenci;

    add_student(grupa, "Budzinski");


    return 0;
}

//ZADANIE 9

#include <iostream>
#include <vector>

using namespace std;

auto bubble_sort(std::vector<int>& vec) -> void 
{
    auto changes_were_made = true;
    
    for (auto j = 0; j < vec.size() && changes_were_made; j++) 
    {
        changes_were_made = false;
        
        for (auto i = 0; i < vec.size() - 1; i++) 
        {
            if (vec[i] > vec[i + 1]) 
            {
                auto tmp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = tmp;
                changes_were_made = true;
            }
        }
    }
}

void contains_all(vector<int>&a,vector<int>&b)
{

    if (a.size() == b.size())
    {
        bubble_sort(a);
        bubble_sort(b);

        int it = 0;
        int licznik = 0;

        for (int k = 0; k < a.size(); k++)
        {
            it++;
            if (a[k] == b[k])
                licznik++;
            else
                continue;
        }
        if (it == licznik)
        {
            cout << "Wektory sa takie same" << endl;
        }
        else
            cout << "Wektory roznia sie" << endl;
    }
    else
        cout << "Wektory sa roznej dlugosci" << endl;
}

int main()
{
    vector<int>vec = { 1,2,3,5,7,9 };
    vector<int>vec1 = { 3,2,7,3,9,1 };

    contains_all(vec, vec1);

    return 0;
}
