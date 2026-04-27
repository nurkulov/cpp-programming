// A C++ program to calculte quadratic equations

#include <iostream>
#include <vector>

// finding and returning solutions
std::vector<double> solutions(double a, double b, double c) {
    
    std::vector<double> roots {};
    
    // check if the "a" is 0; pre-condition
    if(a == 0) {
        std::cout << "Error occurred: Not a quadratic equation" << std::endl;
        return roots;
    }
    
    // check if the "b" and "c" is 0
    if(b == 0 && c == 0) {
        std::cout << "Solution: 0" << std::endl;
        return roots;
    }
    // calculating inside discriminant
    double raw {((b * b) - (4 * a * c))};
    
    // check if the inside of discrimant is not negative; pre-condition
    if( raw < 0) {
        std::cout << "Error occurred: Equation with no real roots" << std::endl;
        return roots;
    }
    
    double discriminant {sqrt(raw)};
    
    roots.push_back((-b + discriminant) / (2 * a));
    roots.push_back((-b - discriminant) / (2 * a));
    
    return roots;
    
}

int main() {
    
    // introduction and prompt
    std::cout << "***** Quadratic Equation Solver *****" << std::endl;
    std::cout << std::endl;
    std::cout << "Number (n) range: n >= 0 " << std::endl;
    std::cout << "Enter your numbers (a, b, c): ";
    
    // reading inputs to input variables
    double a {}, b {}, c {};
    std::cin >> a >> b >> c;
    
    // displaying quadratic equation provided a, b, and c
    std::cout << "\nQuadratic equation: " << a << "x^2 + " << b << "x + " << c << std::endl;
    
    // storing returned elements of vector
    std::vector<double> roots {solutions(a, b, c)};
    
    // check if the returned vector is empty or not
    if(!roots.empty()) {
        std::cout << "Solution 1: " << roots[0] << std::endl;
        std::cout << "Solution 2: " << roots[1] << std::endl;
    }
    
    return 0;
}

