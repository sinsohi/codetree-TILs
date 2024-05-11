#include <iostream>
#include <string>

using namespace std;

int main() {
    string s,t,temp;

    cin >> t >> s;
    temp = s;
    s = t;
    t = temp;

    cout << t << "\n" << s;

    return 0;
}