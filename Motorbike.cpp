// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metody Print,
// ale nie wolno zmienic jej implementacji.

#include "Motorbike.h"

#include <iostream>
//Funkcja wypisujaca nazwe i rok produkcji
void Motorbike::Print() const
{
  std::cout<<"This motorbike was produced in "<<m_productionYear<<" year"<<std::endl;
}

