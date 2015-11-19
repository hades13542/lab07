// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PrintProduction i
// Print, ale nie wolno zmieniac ich implementacji.
#pragma once
class Vehicle //Klasa bazowa po ktorej dziedzicza Car i Motorbike
{
public:
  Vehicle(int rok):m_productionYear(rok){} 	//Konstruktor przyjmujacy rok produkcji
  virtual void Print() const; 			//Funkcja wypisujaca nazwe i rok produkcji
  virtual void PrintProduction() const; 	//Funkcja wypisujaca rok produkcji
  virtual ~Vehicle(){}				//Wirtualny destruktor
  static void Destroy();			//Funkcja usuwajaca obiekty i tablice _obj
  static int _count;				//Licznik elementow w tablicy obj
  static Vehicle** _obj;			//Tablica wskaznikow do obiektow typu Vehicle
protected:
  int m_productionYear;				//Zmienna przechowywujaca rok produkcji

};
