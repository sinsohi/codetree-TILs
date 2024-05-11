#include <iostream>

int main() {
    int a = 3;
    int b = 5;
    int temp;

    temp = a;
    a = b;
    b = temp;

    std::cout << a << "\n" << b;

    return 0;
}