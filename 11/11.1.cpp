#include <bits/stdc++.h>      
#include "vect.cpp"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    ofstream of;
    of.open("11.1.output.txt");
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        of << "After " << steps << " steps, the subject "
            "has the following location:\n";
        of << result << endl;
        result.polar_mode();
        of << " or\n" << result << endl;
        of << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    of.close();
    return 0; 
}
