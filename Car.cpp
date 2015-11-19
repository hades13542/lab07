// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmienic deklaracje metody Print ale
// nie wolno zmieniac jej implementacji.

#include "Car.h"
#include <iostream>

//Funkcja wypisujaca nazwe i rok produkcji
void Car::Print() const
{
  std::cout<<"This car was produced in "<<m_productionYear<<" year"<<std::endl;
}


