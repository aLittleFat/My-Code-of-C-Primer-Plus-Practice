#ifndef Person_H_
#define Person_H_

class Person
{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person();
	
	Person(const string & ln, const char * fn);
	
	void Show() const;

	void FormalShow() const;

};

#endif