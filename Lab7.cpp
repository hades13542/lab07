// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal sie
// i dzialal zgodnie z ponizszym opisem, a wynik jego dzialania byl
// taki sam jak podany na końcu tego pliku.

// Prosze zaimplementowac klasy, ktore beda reprezentowaly
// pojazdy. Kazdy pojazd ma rok produkcji.

// UWAGA! Nie wolno korzystac z zadnych metod wypisujacych tekst na
// ekran oprocz, tych ktore sa juz zaimplementowane.

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab07. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Lab7.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Prosze utrzymac spojnosc
// nazewnictwa w programie oraz jezyka w komentarzach.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie.

#include"Lab7.h"
#include<iostream>


int main ()
{
  Yamaha* my_yamaha =  Yamaha::Factory(2014);
  const Yamaha your_yamaha (1995);
  const Motorbike* my_bike = my_yamaha;
  Vehicle* my_vehicle = my_yamaha;

  std::cout<<"\nFirst Print\n";
  (*my_vehicle).Print();
  (*my_bike).Print();
  (*my_yamaha).Print();
  (*my_yamaha).PrintProduction();

  std::cout<<"\nSecond Print\n";
  OnScreen(*my_bike, &Vehicle::Print); //*
  OnScreen(*my_bike, &Vehicle::PrintProduction);
  OnScreen(your_yamaha, &Vehicle::Print); //*
  OnScreen(your_yamaha, &Vehicle::PrintProduction);

  std::cout<<"\nThird Print\n";
  FullInfo(*my_bike, &Vehicle::Print);
  FullInfo(*my_bike, &Vehicle::PrintProduction);
  FullInfo(your_yamaha, &Vehicle::Print);
  FullInfo(your_yamaha, &Vehicle::PrintProduction);

  Ferrari my_ferrari (1990);
  Car* my_car = &my_ferrari;
  Vehicle* my_vehicle2 = &my_ferrari;

  Ferrari* your_ferrari = Ferrari::Factory (2016);
  
  std::cout<<"\nFourth Print\n";
  (*my_vehicle2).Print();
  (*my_car).Print();
  my_ferrari.Print();
  my_ferrari.PrintProduction();

  std::cout<<"\nFifth Print\n";
  OnScreen(my_ferrari, &Vehicle::Print);	//*
  OnScreen(my_ferrari, &Vehicle::PrintProduction);
  OnScreen(*your_ferrari, &Vehicle::Print);	//*
  OnScreen(*your_ferrari, &Vehicle::PrintProduction);

  std::cout<<"\nSixth Print\n";
  FullInfo(my_ferrari, &Vehicle::Print);
  FullInfo(my_ferrari, &Vehicle::PrintProduction);
  FullInfo(*your_ferrari, &Vehicle::Print);
  FullInfo(*your_ferrari, &Vehicle::PrintProduction);

  Vehicle::Destroy();

  return 0;
}
/*

First Print
This Yamaha was produced in 2014 year
This Yamaha was produced in 2014 year
This Yamaha was produced in 2014 year
Produced in 2014 year

Second Print
This motorbike was produced in 2014 year
Produced in 2014 year
This motorbike was produced in 1995 year
Produced in 1995 year

Third Print
This Yamaha was produced in 2014 year
Produced in 2014 year
This Yamaha was produced in 1995 year
Produced in 1995 year

Fourth Print
This Ferrari was produced in 1990 year
This Ferrari was produced in 1990 year
This Ferrari was produced in 1990 year
Produced in 1990 year

Fifth Print
This car was produced in 1990 year
Produced in 1990 year
This car was produced in 2016 year
Produced in 2016 year

Sixth Print
This Ferrari was produced in 1990 year
Produced in 1990 year
This Ferrari was produced in 2016 year
Produced in 2016 year
*/
