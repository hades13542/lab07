#include "Lab7.h"

//Funkcja wypisujaca informacje o obiekcie
void OnScreen(const Vehicle& obj,void (Vehicle::*wsk)() const){
	(obj.*wsk)();
}

//Funkcja wypisujaca informacje o obiekcie
void FullInfo(const Vehicle& obj,void (Vehicle::*wsk)() const){
	(obj.*wsk)();
}
