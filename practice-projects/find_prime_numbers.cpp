// A C++ program to find prime numbers from a list of numbers.

#include <iostream>
#include <vector>

int main() {
    std::cout << "Please enter a max value to which you would like to find prime numbers: ";
    long int max_value {};
    std::cin >> max_value;
    std::cout << "Enter a value to find the first that value primes: ";
    int val {};
    std::cin >> val;
    
    std::vector<int> nums {};
    
    for(int i {2}; i <= max_value; i++) {
        nums.push_back(i);
    }
    
    for(int i {0}; i < nums.size(); i++) {
        for(int j {i+1}; j < nums.size(); j++) {
            if(nums[j] % nums[i] == 0) {
                nums.erase(nums.begin() + j);
            }
        }
    }
    for(int i {0}; i < val; i++) {
        std::cout << nums[i] << '\n';
    }
    
    return 0;
}
