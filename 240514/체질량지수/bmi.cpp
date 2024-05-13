#include <iostream>
using namespace std;

int main() {
    int bmi, h, w;
    cin >> h >> w;
    bmi = (10000*w)/(h*h);

    cout << fixed;
    cout.precision(0);
    cout << bmi << endl;

    if(bmi >= 25) cout << "Obesity";

    return 0;
}