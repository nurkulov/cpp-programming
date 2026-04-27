// A C++ program to search for a person by name and show corresponding age if found

#include <iostream>
#include <vector>

bool check_repeat(std::vector<std::string> names, std::string name, int i) {
    bool done {false};
    if(i != 1) {
        for(int i {0}; i < names.size(); i++) {
            if(names[i] == name) {
                done = true;
            }
        }
        return done;
    }
    else {
        return done;
    }
}
void display_names(std::vector<std::string> names) {
    std::cout << "names: { ";
    for(std::string s: names) {
        std::cout << s << " ";
    }
    std::cout << "}" << std::endl;;
}
void display_ages(std::vector<int> ages) {
    std::cout << "ages: { ";
    for(int e: ages) {
        std::cout << e << " ";
    }
    std::cout << "}" << std::endl;;
}

int main() {
    
    std::cout << "Please enter names and ages: ";
    
    std::vector<std::string> names {};
    std::vector<int> ages {};
    std::string name {};
    int age {};
    int i {};
    
    while(std::cin >> name >> age) {
        ++i;
        if(name == "NoName" && age == 0) {
            break;
        }
        else if(check_repeat(names, name, i)) {
            std::cerr << "Error: repeated name" << std::endl;
            break;
            }
        else {
            names.push_back(name);
            ages.push_back(age);
        }
    }
    
    display_names(names);
    display_ages(ages);
    
    std::cout << "Enter your name: ";
    std::string user_name {};
    std::cin >> user_name;
    int x {-1};
    
    for(int i {0}; i < names.size(); i++) {
        if(names[i] == user_name) {
            x = i;
        }
    }
    if(x >= 0) {
        std::cout << "Your name: " << names[x] << std::endl;
        std::cout << "Your age: " << ages[x] << std::endl;
    }
    else {
        std::cout << "Name not found" << std::endl;
    }
    
    
    return 0;
}

