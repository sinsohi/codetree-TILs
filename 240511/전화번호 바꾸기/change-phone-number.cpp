#include <iostream>
using namespace std;

int main() {
    int c,x,y,temp;

    cin >> c;
    cin.get();
    cin >> x;
    cin.get();
    cin >> y;

    temp = x;
    x = y;
    y = temp;

    cout << "010" << "-" << x << "-" << y;

    return 0;
}