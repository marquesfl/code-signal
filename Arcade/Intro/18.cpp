std::map<char, int> freq_str(std::string s) {
  // freq_str : Str -> {Char, Int}
  // Create a hash map with the frequencie of each char in s
  std::map<char, int> alph;
  for(auto c : s)
    alph[c] += 1;
  return alph;
}

bool is_odd(int x) {
  // is_odd : Int -> Bool
  // Is x odd? if Yes, return true. False otherwise.
  return x & 1; // Return true case x, in binary, terminate with one.
}

bool palindromeRearranging(std::string inputString) {
  // palindromeRearranging : Str -> Bool.
  // Check if in freq of inputstring cointains more than one odd
  // number.
  bool odd_flag = false;
  auto freq = freq_str(inputString);
  for(std::map<char, int>::iterator it = freq.begin(); it != freq.end(); it++) {
    if(is_odd(it->second)) {
      if(odd_flag) {return false;}
      odd_flag = !odd_flag;
    }
  }
  return true;
}
