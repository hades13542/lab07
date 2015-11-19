// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metody Print,
// ale nie wolno zmieniac jej implementacji.
#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
public:
  Car(int rok):Vehicle(rok){}		//Konstruktor przyjmujacy date produkcji
   virtual void Print() const;		//Funkcja wypisujaca nazwe i rok produkcji
};
