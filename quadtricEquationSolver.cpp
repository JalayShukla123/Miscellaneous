#include <iostream>
#include <cmath>

int main() {
    double xsquare = 0;
    double x = 0;
    double constant = 0;
    double answer1 = 0;
    double answer2 = 0;
    std::cout << "Enter your x^2 coefficient: " << std::endl;
    std::cin >> xsquare;
    std::cout << "Enter your x coefficient: " << std::endl;
    std::cin >> x;
    std::cout << "Enter your constant: " << std::endl;
    std::cin >> constant;
    answer1 = ((-x) + sqrt(x*x - 4*xsquare*constant))/(2*xsquare);
    answer2 = ((-x) - sqrt(x*x - 4*xsquare*constant))/(2*xsquare);
    if (answer1 == answer2) {
        std::cout << "Your solution is x = " << answer1 << std::endl;
        return 0;
    }
    else
        std::cout << "Your solutions are x = " << answer1 << ", " << answer2 << std::endl;

    return 0;
}
