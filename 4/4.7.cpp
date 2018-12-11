#include <bits/stdc++.h>

using namespace std;

struct Pizza{
    string name_of_company;
    double radius;
    double weight;
    void out(){
        cout << "The name of the company is: " << this->name_of_company << endl;
        cout << "The radius of the pizza is: " << this->radius << endl;
        cout << "The weight of the pizza is: " << this->weight << endl;
    }
};

int main(){
    Pizza pizza;
    cout << "Please enter the name of the company:" << endl;
    cin >> pizza.name_of_company;
    cout << "Please enter the radius of the pizza:" << endl;
    cin >> pizza.radius;
    cout << "Please enter the weight of the pizza:" << endl;
    cin >> pizza.weight;
    pizza.out();
    return 0;
}