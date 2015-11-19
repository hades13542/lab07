// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmienic deklaracje metody Print, ale
// nie wolno zmieniac jej implementacji.
#pragma once
#include "Motorbike.h"

class Yamaha : public Motorbike
{
public:
  static Yamaha* Factory(int); 		//Funkcja tworzaca obiekty typu Yamaha i zwracajaca do nich wskaznik
  Yamaha(int rok):Motorbike(rok){}	//Konstruktor przyjmujacy rok produkcji
  void Print() const;			//Funkcja wypisujaca nazwe i rok produkcji
  
};

