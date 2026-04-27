// A C++ program that reads student scores form a file and
// prints a formatted table with names, scores, and the average

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

int main() {
    
    std::ifstream in_file;
    in_file.open("../practice-projects/responses.txt");
    
    if(!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    
    std::cout << "Student"
              << std::setw(15) << "Score"
              << std::endl;
    std::cout << std::setw(22) << std::setfill('-') << "";
    
    
    int index {};
    double average_score {};
    char answer[5] {'A', 'B', 'C', 'D', 'E'};
    
    std::string student_name;
    std::string response {5, ' '};
    std::cout << std::setfill(' ');

    while(!in_file.eof()) {
        in_file >> response >> student_name;
        
        if(index == 0) {
            response = "";
        }
        if(index == 5) {
            student_name = "";
        }
        
        int count {};
        for(size_t i {0}; i < response.length(); i++) {
            if(answer[i] == response[i]) {
                count++;
            }
        }
        
        if(count == 5) {
            response = "5.0";
            average_score += 5;
        }
        else if(count == 4) {
            response = "4.0";
            average_score += 4;
        }
        else if(count == 3) {
            response = "3.0";
            average_score += 3;
        }
        else if(count == 2) {
            response = "2.0";
            average_score += 2;
        }
        else if(count == 1) {
            response = "1.0";
            average_score += 1;
        }
        
        std::cout << std::setw(13) << std::left << response << std::endl;
        if(student_name == ""){
            std::cout << student_name << std::setw(22) << std::setfill('-') << "";
        }
        std::cout << student_name << std::setw(static_cast<int>(22 - (student_name.size()) - 5)) << std::setfill(' ') << " ";
        index++;
    }
    
    std::cout << std::endl;
    std::cout << "Average score" << std::setw(7) << std::right << average_score / 5 << std::endl;
    
    in_file.close();
    
    return 0;
}

