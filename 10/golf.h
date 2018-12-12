#ifndef golf_H_
#define golf_H_ value

class golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	golf();
	golf(const char * name, int hc);
	
	int setgolf();

	void sethandicap(int hc);

	void show();
};

#endif

