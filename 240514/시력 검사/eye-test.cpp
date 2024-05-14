#include <iostream>
using namespace std;

int main() {
    float left, right;
    cin >> left >> right;
    if(left >= 1 && right >= 1) cout << "High";
    else if(left >= 0.5 && right >= 0.5) cout << "Middle";
    else cout << "Low";
    return 0;
}