#include  <iostream>
#include  <random>

int liczba; int guess;

int main()
{
std::random_device rd;
std::uniform_int_distribution<int> d100 (1,100);
liczba = d100 (rd);
//liczba =  rand()%100+1;
//std::cout << liczba <<std::endl;
do
{
std::cout<<"Wybierz liczbe od 1 do 100: ";
std::cin >> guess;
if(guess == liczba)
std::cout<<"brawo!!"<<std:: endl;
else if(guess>liczba)
std::cout<<"za duża liczba"<<std:: endl;
else if(guess<liczba)
std::cout<<"za mała liczba"<<std:: endl;
}while(guess!=liczba);
return 0;

}
