#ifndef Plorg_H_
#define Plorg_H_

class Plorg
{
private:
	static const int Len = 20;
	char name[Len];
	int CI;
public:
	Plorg(char * na = "Plorga");
	void show();
	void setCI(int ci);
};

#endif

