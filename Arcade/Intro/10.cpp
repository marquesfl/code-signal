int commonCharacterCount(string s1, string s2) {
  // Count the numbers of common character between two strings.
  int count = 0;                // Counter of common chars
  for(auto& x : s1) {
    for(auto& y : s2) {
      if(x == y) {
        y = '_';
        count += 1;
        break;
      }
    }
  }
  return count;
}
