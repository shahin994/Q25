#include <iostream>

int main() {
    double x1, y1, x2, y2;
    
    std::cout << "Enter x1: ";
    std::cin >> x1;
    std::cout << "Enter y1: ";
    std::cin >> y1;
    
    std::cout << "Enter x2: ";
    std::cin >> x2;
    std::cout << "Enter y2: ";
    std::cin >> y2;
    
    double a = (y2 - y1) / (x2 - x1);
    double b = y1 - a * x1;
    
    std::cout << "The equation of the line passing through (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: y = " << a << "x + " << b << std::endl;

    return 0;
}