// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PrintProduction i
// Print, ale nie wolno zmieniac ich implementacji.
#pragma once

#include "Car.h"

class Ferrari : public Car
{
public:
  static Ferrari* Factory(int); //Funkcja tworzaca obiekty typu Ferrari i zwracajaca do nich wskaznik
  Ferrari(int rok):Car(rok){} //Konstruktor przyjmujacy rok produkcji
  void Print() const; //Funkcja wypisujaca nazwe i rok produkcji
};
