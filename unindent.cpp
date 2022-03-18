#include <string> 
#include <cctype>
#include <iostream>
#include <climits>
#include "unindent.h"


std::string removeLeadingSpaces(std::string line)
{
  int len = line.length();
  std::string output;

  int i = 0;
  if (isspace(line[i])){
      do{
	  i++;
      }while (isspace(line[i]));
  }

  output = line.substr(i);
  return output;
}