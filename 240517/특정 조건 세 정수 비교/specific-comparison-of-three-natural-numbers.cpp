#include <iostream>
using namespace std;

int Min(int a, int b, int c){
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    return min;
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int min = Min(a,b,c);
    if (a==min) cout << "1 ";
    else cout << "0 ";

    if(a==b==c) cout << "1";
    else cout << "0";

    
    return 0;
}