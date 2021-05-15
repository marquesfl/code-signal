int commonCharacterCount(string s1, string s2) {
  // commoncharactercount : Str, Str -> Int.
  // Count the numbers of common character between two strings.
  int count = 0;                // Counter of common chars
  for(auto& c : s1) {
    int pos = s2.find(c);
    if(pos != -1) {
      count += 1;
      s2.erase(pos, 1);
    }
  }
  return count;
}
