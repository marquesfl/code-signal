#include <cstring>

std::string str_reverse(std::string str) {
  // Reverse a string using reverse iterator.
  return string(str.rbegin(), str.rend()); // Reverse iterator
}

bool checkPalindrome(std::string inputString) {\
  // Check palindrome of a string.
  return inputString == str_reverse(inputString);
}
