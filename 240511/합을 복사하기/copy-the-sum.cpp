#include <iostream>

int main() {
    int a,b,c;
    int sum = 0;
    a = 1;
    b = 2;
    c = 3;

    sum = a + b + c;

    a = b = c = sum;

    std::cout << a << " " << b << " " << c;
    
    return 0;
}