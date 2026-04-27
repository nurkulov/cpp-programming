// A C++ program to convert from celsius to fahrenheit

#include <iostream>

double ctof(double c) {
    double f {};
    f = (9.0/5 * c) + 32;
    return f;
}
double ftoc(double f) {
    double c {};
    c = (f - 32) * 5.0/9;
    return c;
}
void DisplayMenu() {
    std::cout << "******* WELCOME *******" << std::endl;
    std::cout << "1. Convertion from Celcius to Fahrenheit" << std::endl;
    std::cout << "2. Convertion from Fahrenheit to Celcius" << std::endl;
}

int main() {
    
    DisplayMenu();
    char user_choice {};
    
    while(user_choice != '1' && user_choice != '2') {
        std::cout << "Which one do you choose: (1 or 2): ";
        std::cin >> user_choice;
    }
    
    if(user_choice == '1') {
        std::cout << "Enter a temperature in Celcius: ";
        
        double user_c {};
        std::cin >> user_c;
        
        double f {ctof(user_c)};
        std::cout << "Temperature in Fahrenheit: " << f << std::endl;
    }
    else if(user_choice == '2') {
        std::cout << "Enter a temperature in Fahrenheit: ";
        
        double user_f {};
        std::cin >> user_f;
        
        double c {ftoc(user_f)};
        std::cout << "Temperature in Celcius: " << c << std::endl;
    }
    else {
        std::cout << "Invalid choice!" << std::endl;
    }
    
    
    return 0;
}

