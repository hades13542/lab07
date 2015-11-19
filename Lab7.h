#pragma once 

#include "Vehicle.h"
#include "Ferrari.h"
#include "Yamaha.h"
#include "Motorbike.h"

void OnScreen(const Vehicle&,void (Vehicle::*)() const);	//Funkcja wypisujaca informacje o obiekcie
void FullInfo(const Vehicle&,void (Vehicle::*)() const);	//Funkcja wypisujaca informacje o obiekcie
