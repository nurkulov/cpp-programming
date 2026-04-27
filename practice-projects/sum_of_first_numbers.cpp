// A C++ program to calculate the sum of the first X number of values

#include <iostream>

int sum(std::vector<int> vals) {
    int sum {};
    
    for(int i: vals) {
        sum += i;
    }
    return sum;
}

int main() {
    
    std::cout << "Please enter the number of values you want to sum: ";
    int num {};
    std::cin >> num;
    
    if(!std::cin) {
        std::cout << "error occurred" << std::endl;
    }
    else {
        std::cout << "Please enter some integers (press '|' to stop): ";
        std::vector<int> values {};
        int val {};
        int i {};
        
        while(std::cin >> val) {
            if(i < num) {
                values.push_back(val);
            }
            i++;
        }
        if(num <= values.size()) {
            std::cout << "The sum of the first " << num << " numbers is " << sum(values) << std::endl;
        }
        else {
            std::cout << "Error occurred" << std::endl;
        }
    }
    
    return 0;
}

// Example:
//Please enter the number of values you want to sum: 4
//Please enter some integers (press '|' to stop): 5 5 3 2 1 |
//The sum of the first 4 numbers is 15
//Program ended with exit code: 0
