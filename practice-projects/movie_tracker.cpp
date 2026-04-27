// A C++ program for movie fanatics to keep track of what movies they have watched,
// what their ratings are, and how many times they watched each movie


#include <iostream>
#include <vector>
#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
    
public:
    
    Movie(std::string name, std::string rating, int watched);
    
    Movie(const Movie &source);
    
    ~Movie();
    
    void set_name(std::string name){
        this->name = name;
    }
    std::string get_name() const {
        return name;
    }
    void set_rating(std::string rating){
        this->rating = rating;
    }
    std::string get_rating() const {
        return rating;
    }
    void set_watched(int watched){
        this->watched = watched;
    }
    int get_watched() const {
        return watched;
    }
    
    void increment_watched(){
        watched++;
    }
    
    void display() const;
};

Movie::Movie(std::string name, std::string rating, int watched)
: name{name}, rating{rating}, watched{watched} {
    
}
Movie::Movie(const Movie &source)
: name{source.name}, rating{source.rating}, watched{source.watched} {
    
}
Movie::~Movie(){
    
}

void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}




class Movies {
private:
    std::vector <Movie> movies;
    
public:
    Movies();
    ~Movies();
    
    bool add_movie(std::string name, std::string rating, int watched);
    bool increment_watched(std::string name);
    
    
    
    void display() const;
};

Movies::Movies(){
    
}
Movies::~Movies(){
    
}

bool Movies::add_movie(std::string name, std::string rating, int watched){
   for(const auto &m: movies){
       if(m.get_name() == name){
           std::cout << name << " already exists" << std::endl;
           return false;
       }
   }
        
    movies.push_back(Movie{name, rating, watched});
    std::cout << name << " added" << std::endl;
    return true;

}
bool Movies::increment_watched(std::string name){
    if(!movies.empty()){
        for(auto &m: movies){
            if(m.get_name() == name){
                m.increment_watched();
                std::cout << name << " watch incremented" << std::endl;
                return true;
            }
        }
        std::cout << name << " not found" << std::endl;
        return false;
    }
    else{
           std::cout << "Sorry, no movies to increment" << std::endl;
           return false;
    }
}


void Movies::display() const {
    if(!movies.empty()){
        std::cout << std::endl;
        for(size_t i {0}; i < movies.size(); i++){
           movies[i].display();
        }
        std::cout << std::endl;
    }
    else{
        std::cout << "Sorry, no movies to display" << std::endl;
    }
}


int main(){
    
    Movies my_movies;
    
    my_movies.display();
    
    my_movies.add_movie("Big", "PG-13", 2);
    my_movies.add_movie("Star Wars", "PG", 5);
    my_movies.add_movie("Cinderella", "PG", 4);
    
    my_movies.display();
    
    my_movies.add_movie("Cinderella", "PG", 4);
    my_movies.add_movie("Ice Age", "G", 6);
    
    my_movies.display();
    
    my_movies.increment_watched("Big");
    my_movies.increment_watched("Ice Age");
    
    my_movies.display();
    
    my_movies.increment_watched("XXX");
    
    
    return 0;
    
}

