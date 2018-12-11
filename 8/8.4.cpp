#include <iostream>
#include <cstring>

struct stringy
{
	char * str;
	int ct;
};

void set(stringy & stry, const char * str){
	stry.ct = strlen(str);
	stry.str = new char[stry.ct + 1];
	strcpy(stry.str, str);
}

void show(stringy & stry, const int times = 1){
	for(int i = 0; i < times; ++i){
		std::cout << stry.str << std::endl;
	}
}

void show(char * str, const int times = 1){
	for(int i = 0; i < times; ++i){
		std::cout << str << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}