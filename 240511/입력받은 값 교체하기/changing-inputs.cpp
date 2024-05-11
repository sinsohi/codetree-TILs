#include <iostream>

int main() {
    int a,b,temp;
    std::cin >> a >> b;
    temp = a;
    a = b;
    b = temp;

    std::cout << a << " " << b;

    return 0;
}