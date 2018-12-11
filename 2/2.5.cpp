#include <bits/stdc++.h>

using namespace std;

double get_fahrenheit_from_celsius(double celsius){
    return 1.8 * celsius + 32.0;
}

int main(){
    cout << "Please enter a Celsius value:" << endl;
    double celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << get_fahrenheit_from_celsius(celsius)
         << " degrees Fahrenheit." << endl;
    return 0;
}