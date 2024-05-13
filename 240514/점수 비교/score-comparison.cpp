#include <iostream>
using namespace std;

int main() {
    int A_math, A_english, B_math, B_english;
    cin >> A_math >> A_english;
    cin >> B_math >> B_english;
    cout << (A_math > B_math && A_english > B_english);
    return 0;
}