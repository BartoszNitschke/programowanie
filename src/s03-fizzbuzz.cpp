#include <iostream>

int liczba;

int main()
{
std::cout<<"Proszę podać liczbę :";
std::cin>> liczba;

for (int i = 0; i<=1 ;i++){
if(i % 3 == 0 && liczba %5 == 0)
{
std::cout<<i<<"Fizzbuzz";
}
else if(i % 5 == 0)
{
std::cout<<i<<"Buzz";
}
else if(i %3 == 0)
{
std::cout<<i<<"Fizz";
}
}
return 0;
}
