#include <bits/stdc++.h>

using namespace std;

void outputtime(int hours, int minutes){
    cout << "Time: " << hours << ":" << minutes << endl;
}

int main(){
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cout << endl;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    outputtime(hours, minutes);
    return 0;
}