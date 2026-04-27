// A C++ program that prints a growing pyramid of a user-entered message

#include <iostream>
#include <string>
#include <cctype>

int main(){
   
    std::string user_message {};
    std::string reverse_message {};
    std::string space {};
    
    std::cout << "Enter a message: ";
    std::cin >> user_message;
    
    for(int j = static_cast<int>(user_message.length() - 1); j >= 0; j--){
        reverse_message += user_message.at(j);
    }
    
    space = std::string(user_message.length() + 5, ' ');
    
    for( size_t i = 0; i < user_message.length(); i++){
        std::cout << space.erase(space.length() - 1, 1) << user_message.substr(0, i + 1) << reverse_message.substr(user_message.length() -i, i) << std::endl;
    }
    
    return 0;
}

