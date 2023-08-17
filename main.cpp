#include <iostream>
int expo(int base, int power) {
    if (power > 0) {
        return base * expo(base, power - 1);
    }
    else
        return 1;
}
int main() {
    int base = 0;
    int power = 0;
    std::cout << "What is the base? ";
    std::cin >> base;
    std::cout << "What is the power? ";
    std::cin >> power;
    std::cout << expo(base, power);
    return 0;
}
