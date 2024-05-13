#include <iostream>

int main() {
    int a,b;
    std::cin >> a >> b;
    int small = a > b ? b : a;
    int big = a > b ? a : b;
    std::cout << big - small;
    return 0;
}