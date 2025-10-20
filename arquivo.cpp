#include <iostream>

int main() {

    int x, y, result;

    std::cout << "\nDigite um numero: ";
    std::cin >> x;
    std::cout << "\nDigite outro numero: ";
    std::cin >> y;

    result = x + y;

    std::cout << x << " + " << y << " = " << result << std::endl;

    return 0;
}