std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
  // Return a list of biggest strings in inputArray.

  int max_str_len, curr_str_len;
  std::vector<std::string> result;

  max_str_len = 0;
  for(std::string s : inputArray) {
    curr_str_len = s.length();
    if(max_str_len < curr_str_len) {
      max_str_len = curr_str_len;
      result.clear();
      result.push_back(s);
    }
    else if(max_str_len == curr_str_len) {
      result.push_back(s);
    }
  }

  return result;
}
