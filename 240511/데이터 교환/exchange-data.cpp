#include <iostream>

int main() {
    int a,b,c,temp,temp2;
    a = 5;
    b = 6;
    c = 7;

    temp = b;
    b = a; 
    temp2 = c;
    c = temp;
    a = temp2;

    std::cout << a << "\n" << b << "\n" << c;
    

    return 0;
}