#include "golf.h"
#include <bits/stdc++.h>

void setgolf(golf & g, const char * name, int hc){
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g){
	std::cout << "Please Enter the name and the handicap" << std::endl;
	char name[Len];
	int hc;
	std::cin >> name;
	if(strcmp(name, "") == 0) return 0;
	std::cin >> hc;
	setgolf(g, name, hc);
}

void handicap(golf & g, int hc){
	g.handicap = hc;
}

void showgolf(const golf & g){
	std::cout << g.fullname << " " << g.handicap << std::endl;
}