#include "complex0.h"

complex::complex(double a, double b){
	r = a;
	i = b;
}

complex operator + (const complex & a, const complex & b) {
	return complex(a.r + b.r, a.i + b.i);
}

complex operator - (const complex & a, const complex & b) {
	return complex(a.r - b.r, a.i - b.i);
}

complex operator * (const complex & a, const complex & b) {
	return complex(a.r * b.r - a.i * b.i, a.r * b.i + a.i * b.r);
}

complex operator * (const double & a, const complex & b) {
	return complex(a * b.r, a * b.i);
}

complex operator ~ (const complex & a) {
	return complex(a.r, -a.i);
}

std::ostream & operator << (std::ostream & os, const complex & a) {
	os << a.r << " " << a.i << " ";
	return os;
}

std::istream & operator >> (std::istream & is, complex & a) {
	is >> a.r >> a.i;
	return is;
}