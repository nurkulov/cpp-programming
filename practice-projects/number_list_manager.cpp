// A C++ program to manage a list of numbers with options to print, add,
// calculate mean, find smallest and largest, and quit.

#include <iostream>
#include <vector>

int main() {
   
    std::vector <int> list {};
    char choice {};
    bool done {false};
    
    
    do{
       
        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        std::cout << std::endl;
        
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        if(choice == 'Q' || choice == 'q'){
            std::cout << std::endl;
            std::cout << "Goodbye!..." << std::endl;
            done = true;
        }
        else if(choice == 'P' || choice == 'p'){
            
            if(!list.empty()){std::cout << "[ ";
                for(int i {0}; i < list.size(); i++){
                    std::cout << list.at(i) << " ";
                }
                std::cout << "]" << std::endl;
            }
            else{
                std::cout << "{} - the list is empty" << std::endl;
                std::cout << std::endl;
            }
        }
        else if(choice == 'A' || choice == 'a'){
                int num {};
                std::cout << "Enter an integer to add to the list: ";
                std::cin >> num;
                list.push_back(num);
                std::cout << num << " added" << std::endl;
                std::cout << std::endl;
        }
        else if(choice == 'M' || choice == 'm'){
            if(!list.empty()){
                double sum {};
                for(int i {0}; i < list.size(); i++){
                    sum += list.at(i);
                }
                std::cout << "The mean is " << sum / list.size() << std::endl;
                std::cout << std::endl;
            }
            else{
                std::cout << "Unable to calculate the mean - no data" << std::endl;
                std::cout << std::endl;
            }
        }
        else if(choice == 'S' || choice == 's'){
            if(!list.empty()){
                int smallest = list.at(0);
                for(int i {1}; i < list.size(); i++){
                    if(list.at(i) < smallest){
                        smallest = list.at(i);
                    }
                }
                std::cout << "The smallest number is " << smallest << std::endl;
                std::cout << std::endl;
            }
            else{
                std::cout << "Unable to determine the smallest - no data" << std::endl;
                std::cout << std::endl;
            }
        }
        else if(choice == 'L' || choice == 'l'){
            if(!list.empty()){
                int largest = list.at(0);
                for(int i {1}; i < list.size(); i++){
                    if(list.at(i) > largest){
                        largest = list.at(i);
                    }
                }
                std::cout << "The largest number is " << largest << std::endl;
                std::cout << std::endl;
            }
            else{
                std::cout << "Unable to determine the largest - no data" << std::endl;
                std::cout << std::endl;
            }
        }
        else{
            std::cout << "Unknown choice - please try again" << std::endl;
            std::cout << std::endl;
        }
    
        
    }while(!done);
    
   
    
    return 0;
}
