#include <iostream>
#include <string>


std::string haslo;
std::string haslo2;
int main()
{
std::cout<<"Proszę podać haslo :";
std::cin>>haslo;
do
{
std::cout<<"Podaj ponownie haslo :";
std::cin>> haslo2;
}while(haslo != haslo2);
std::cout<<"Dobre haslo"<<std::endl;
}





