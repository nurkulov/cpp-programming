// A C++ program to convert from celsius to kelvin

#include <iostream>

double ctok(double c) {
    const double lowest_c {-273.15};
    const double val {273.15};
    double k {};
    
    if(c < lowest_c) {
        std::cerr << "error occured!" << std::endl;
    }
    else {
        k = c + val;
    }
    if(k < 0) {
        std::cout << "error occured" << std::endl;
    }
    return k;
}
double ktoc(double k) {
    const double val {273.15};
    const double lowest_k {0};
    double c {};
    
    if(k < lowest_k) {
        std::cout << "error occured!" << std::endl;
    }
    else {
        c = k - val;
    }
    return c;
    
    
}
int main() {
    std::cout << "Enter your celsius temperature: ";
    double user_c {};
    std::cin >> user_c;
    
    std::cout << "Enter your kelvin temperature: ";
    double user_k {};
    std::cin >> user_k;
    
    std::cout << std::endl;
    
    double k {ctok(user_c)};
    std::cout << "Kelvin temperature: " << k << " K" << std::endl;
    
    double c {ktoc(user_k)};
    std::cout << "Celsius temperature: " << c << " C" << std::endl;
    
    return 0;
}

