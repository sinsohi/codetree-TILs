#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int sum, avg;
    cin >> a >> b >> c;
    sum = a+b+c;
    avg = (a+b+c)/3;
    cout << sum << endl;
    cout << avg << endl;
    cout << sum - avg;
    
    return 0;
}