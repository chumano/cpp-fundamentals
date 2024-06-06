#include <string>
enum AnimalType{
    Ground,
    Water,
    Sky
};

AnimalType t = Ground;

enum class FileError {
    notfound,
    ok
};

FileError fe = FileError::notfound;


struct Point
{
    int x;
    int y;
    Point(){
        this->x = 10;
        this->y =20;
    }

    std::string toString(){
        return "("+ 
        std::to_string(this->x) 
        + ", "+  
        std::to_string(this->y)+")";
    }

};
