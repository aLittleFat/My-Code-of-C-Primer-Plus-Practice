#ifndef COMPLEX_H_
#define COMPLEX_H_

class complex
{
private:
	double r;
	double i;
public:
	complex(double a = 0, double b = 0);
	friend complex operator + (const complex & a, const complex & b) ;
	friend complex operator - (const complex & a, const complex & b) ;
	friend complex operator * (const complex & a, const complex & b) ;
	friend complex operator * (const double & a, const complex & b) ;
	friend complex operator ~ (const complex & a) ;
	friend std::ostream & operator << (std::ostream & os, const complex & a) ;
	friend std::istream & operator >> (std::istream & is, complex & a) ;
};

#endif

