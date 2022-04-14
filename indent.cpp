#include "indent.h"
#include <string>




std::string indent(std::string line, int out, int in) { 
    std::string result = ""; 

    for(int i = 0; i < out - in; i++) { 
        result += "\t"; 
    }

    return result + line; 
}

