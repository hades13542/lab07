// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PrintProduction i
// Print, ale nie wolno zmieniac ich implementacji.

#include <iostream>
#include "Ferrari.h"

//Funkcja tworzaca obiekty typu Ferrari i zwracajaca do nich wskaznik
Ferrari* Ferrari::Factory(int rok){
	Ferrari* temp = new Ferrari(rok);
	_obj[_count++]=temp;
	return temp;
}

//Funkcja wypisujaca nazwe i rok produkcji
void Ferrari::Print() const
{
  std::cout<<"This Ferrari was produced in "<<m_productionYear<<" year"<<std::endl;
}
