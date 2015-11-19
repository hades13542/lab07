// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metody Print,
// ale nie wolno zmienic jej implementacji.

#include "Yamaha.h"
#include <iostream>

//Funkcja tworzaca obiekty typu Yamaha i zwracajaca do nich wskaznik
Yamaha* Yamaha::Factory(int rok){
	Yamaha* temp = new Yamaha(rok);
	_obj[_count++]=temp;
	return temp;
}

//Funkcja wypisujaca nazwe i rok produkcji
void Yamaha::Print() const
{
  std::cout<<"This Yamaha was produced in "<<m_productionYear<<" year"<<std::endl;
}
