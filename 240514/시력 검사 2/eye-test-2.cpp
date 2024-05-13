#include <iostream>
using namespace std;

double sight;

int main() {
    cin >> sight;
    if(sight >= 1) cout << "High";
    else if(sight >= 0.5) cout << "Middle";
    else cout << "Low";
    return 0;   
}