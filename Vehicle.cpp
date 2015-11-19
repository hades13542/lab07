// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PrintProduction i
// Print, ale nie wolno zmieniac ich implementacji.

#include "Vehicle.h"
#include <iostream>

//inicjalizacja zmiennych statycznych 
Vehicle** Vehicle::_obj = new Vehicle* [2];
int Vehicle::_count=0;

//Funkcja wypisujaca nazwe i rok produkcji
void Vehicle::Print() const 
{
std::cout<<"This vehicle was produced in "<<m_productionYear<<" year"<<std::endl;
}

//Funkcja wypisujaca rok produkcji
void Vehicle::PrintProduction() const
{
  std::cout<<"Produced in "<<m_productionYear<<" year"<<std::endl;
}

//Funkcja usuwajaca obiekty i tablice _obj
void Vehicle::Destroy(){
	for(int i =0;i<_count;i++){
		delete _obj[i];
	}
	delete [] _obj;
}
