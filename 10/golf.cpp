#include "golf.h"

golf::golf(){};

golf::golf(const char * name, int hc){
	strcpy(fullname, name);
	handicap = hc;
}

int golf::setgolf(){
	std::cout << "Please Enter the name and the handicap" << std::endl;
	char name[Len];
	int hc;
	std::cin >> name;
	if(strcmp(name, "") == 0) return 0;
	std::cin >> hc;
	golf temp(name, hc);
	*this = temp;
	return 1;
}

void golf::sethandicap(int hc){
	handicap = hc;
}

void golf::show(){
	std::cout << fullname << " " << handicap << std::endl;
}