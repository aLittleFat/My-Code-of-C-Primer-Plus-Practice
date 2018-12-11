#include "sales.h"
#include <iostream>

namespace SALES{
	
	void setSales(Sales & s, const double ar[], int n){
		double sum = 0;
		s.min = s.max = ar[0];
		for(int i = 0; i < n; ++i){
			s.sales[i] = ar[i];
			sum += ar[i];
			if(ar[i] < s.min){
				s.min = ar[i];
			}
			if(ar[i] > s.max){
				s.max = ar[i];
			}
		}
		s.average = sum / n;
	}

	void setSales(Sales & s){
		int n = 0;
		std::cin >> n;
		double * ar = new double[n];
		for(int i = 0; i < n; ++i){
			std::cin >> ar[i];
		}
		setSales(s, ar, n);
		delete [] ar;
	}

	void showSales(Sales & s){
		std::cout << s.average << " " << s.min << " " << s.max << std::endl;
	}
}