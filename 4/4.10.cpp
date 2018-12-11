#include <bits/stdc++.h>

using namespace std;

int main(){
    array<double, 3> score{};
    cout << "Please enter three 40m running scores:" << endl;
    double sum = 0;
    for(int i = 0; i < score.size(); ++i){
        cin >> score[i];
        sum += score[i];
    }
    double average = sum / 3.0;
    cout << "You had run " << score.size() << " times, and the average score is " << average << endl;
    return 0;
}