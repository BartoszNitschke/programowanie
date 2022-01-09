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

//ZADANIE 5


