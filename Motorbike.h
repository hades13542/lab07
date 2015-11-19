// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PrintProduction i
// Print, ale nie wolno zmieniac ich implementacji.
#pragma once
#include "Vehicle.h"

class Motorbike : public Vehicle
{
public:
  Motorbike(int rok):Vehicle(rok){} //Konstruktor przyjmujacy rok produkcji
  virtual void Print() const; //Funkcja wypisujaca nazwe i rok produkcji
};
