// A program to play a Rock-Paper-Scissors game

#include <iostream>
#include <ctime>
#include <vector>

char ComputerChoice() {
    
    std::vector<char> choices {' ', 'r', 'p', 's'};
    srand(static_cast<unsigned int>(time(nullptr)));
    int num {(rand() % 3) + 1};

    return choices.at(num);;
}

int main() {
    const char choice1 {'r'};
    const char choice2 {'p'};
    const char choice3 {'s'};
    
    char user_choice {};
    int i {};
    int winner {};
    int loser {};
    int neutral {};
    
    std::cout << "********** ROCK PAPER SCISSORS Game **********" << std::endl;
    std::cout << "Rock = " << choice1 << std::endl;
    std::cout << "Paper = " << choice2 << std::endl;
    std::cout << "Scissors = " << choice3 << std::endl;
    std::cout << std::endl;
    
    while( i < 3) {
        std::cout << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> user_choice;
        
        switch(user_choice) {
            case choice1: if(ComputerChoice() == choice1) {
                std::cout << "Computer choice: " << choice1 << std::endl;
                std::cout << "It is tie" << std::endl;
                neutral++;
            }
            else if(ComputerChoice() == choice2) {
                std::cout << "Computer choice: " << choice2 << std::endl;
                std::cout << "Paper beats rock" << std::endl;
                std::cout << "Computer win" << std::endl;
                loser++;
            }
            else if(ComputerChoice() == choice3) {
                std::cout << "Computer choice: " << choice3 << std::endl;
                std::cout << "Rock beats scissors" << std::endl;
                std::cout << "You win" << std::endl;
                winner++;
            }
                break;
            case choice2: if(ComputerChoice() == choice1) {
                std::cout << "Computer choice: " << choice1 << std::endl;
                std::cout << "Paper beats rock" << std::endl;
                std::cout << "You win" << std::endl;
                winner++;
            }
            else if(ComputerChoice() == choice2) {
                std::cout << "Computer choice: " << choice2 << std::endl;
                std::cout << "It is a tie" << std::endl;
                neutral++;
            }
            else if(ComputerChoice() == choice3) {
                std::cout << "Computer choice: " << choice3 << std::endl;
                std::cout << "Scissors beats rock" << std::endl;
                std::cout << "Computer win" << std::endl;
                loser++;
            }
                break;
            case choice3: if(ComputerChoice() == choice1) {
                std::cout << "Computer choice: " << choice1 << std::endl;
                std::cout << "Rock beats scissors" << std::endl;
                std::cout << "Computer win" << std::endl;
                loser++;
            }
            else if(ComputerChoice() == choice2) {
                std::cout << "Computer choice: " << choice2 << std::endl;
                std::cout << "Scissors beats paper" << std::endl;
                std::cout << "You win" << std::endl;
                winner++;
            }
            else if(ComputerChoice() == choice3) {
                std::cout << "Computer choice: " << choice3 << std::endl;
                std::cout << "It is a tie" << std::endl;
                neutral++;
            }
                break;
            default:
                std::cout << "Invalid choice!!!" << std::endl;
        }
        i++;
    }
    
    std::cout << std::endl;
    std::cout << "******* GAME OVER *******" << std::endl;
    
    if(winner > loser) {
        std::cout << "You win the game:)" << std::endl;
        
    }
    else if(winner == loser || neutral == i) {
        std::cout << "It is a tie! " << std::endl;
    }
    else {
        std::cout << "You lost the game:(" << std::endl;
    }
    
    
    return 0;
}
