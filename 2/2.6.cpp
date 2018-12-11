#include <bits/stdc++.h>

using namespace std;

double light_year_to_astronomical_units(double light_year){
    return light_year * 63240.0;
}

int main(){
    double light_year;
    cout << "Enter the number of light years:" << endl;
    cin >> light_year;
    cout << light_year << " light years = " << light_year_to_astronomical_units(light_year)
         << " astronomical units." << endl;
    return 0;
}