#include<regex>

std::string reverseInParentheses(std::string inputString) {
  // Reverse string insides parentheses.
  std::regex inside_par("\\([^()]*\\)");
  std::smatch sm;

  while(std::regex_search(inputString, sm, inside_par)) {
    std::string tmp(sm[0]);
    inputString = std::regex_replace(inputString, inside_par,
                                     std::string(tmp.rbegin()+1,tmp.rend()-1) + "$2",
                                     std::regex_constants::format_first_only);
  }
  return inputString;
}
