// A program to play Bulls-Cows game

#include <iostream>
#include <vector>

void intro_display() {
    std::cout << "***** GUESSING GAME *****" << std::endl;
    std::cout << "- Find the 4 unique integer numbers hidden on the game in the right order by guessing." << std::endl;
    std::cout << "- 'bulls' is a number of correct numbers." << std::endl;
    std::cout << "- 'cows' is a number of incorrect numbers. " << std::endl;
    std::cout << "- Please enter 'end' to end the game" << std::endl;
}

int main() {
    
    intro_display();
    std::vector<int> nums {1, 4, 3, 2};
    
    int num1 {};
    int num2 {};
    int num3 {};
    int num4 {};
    
    std::string end_game {};
    bool done {false};
    int bulls {};
    int cows {};
    
    while(!done) {
        std::cout << "\nGuess your number (0 - 9): ";
        std::cin >> num1 >> num2 >> num3 >> num4;
        
        if(num1 == nums.at(0)) {
            bulls++;
        }
        else {
            cows++;
        }
        if(num2 == nums.at(1)) {
            bulls++;
        }
        else {
            cows++;
        }
        if(num3 == nums.at(2)) {
            bulls++;
        }
        else {
            cows++;
        }
        if(num4 == nums.at(3)) {
            bulls++;
        }
        else {
            cows++;
        }
        
        std::cout << bulls << " bulls and " << cows << " cows" << std::endl;
        
        if(bulls == 4 && cows == 0) {
            done = true;
            std::cout << "\nCongrats!!! You found the hidden numbers!!!" << std::endl;
            std::cout << "********** END **********" << std::endl;
        }
        else {
            bulls = 0;
            cows = 0;
        }
    }
    
    return 0;
}


