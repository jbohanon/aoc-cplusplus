#include "src/2015/1/aoc.h"
#include <exception>

namespace aoc {
    class unknown_character_exception: public std::exception
    {
      virtual const char* what() const throw()
      {
        return "Unknown character read from input. Valid input characters are ( and )";
      }
    } unknown_character_ex;
    class file_closed_exception: public std::exception
    {
      virtual const char* what() const throw()
      {
        return "file not open";
      }
    } file_closed_ex;

    int worker::doBadWork() { return 1; }
    int worker::doGoodWork() { return 0; }
    int worker::calculateFloor(std::fstream& f) {
        if(!f.is_open()) {
            throw file_closed_ex;
        }
        int floor = 0;
        char inp;
        while(f >> inp) {
            if(inp == '(') {
                floor++;
            } else if( inp == ')') {
                floor--;
            } else {
                throw unknown_character_ex;
            }
        }
        f.close();
        return floor;
    }
}
