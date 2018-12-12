#include "Plorg.h"

Plorg::Plorg(char * na){
	strcpy(name, na);
	CI = 50;
}

void Plorg::show(){
	cout << name << " " << CI << endl;
}

void Plorg::setCI(int ci){
	CI = ci;
}