int diff_pos(std::vector<int> a, std::vector<int> b, int i = 0) {
  // diff_pos : [Int], [Int], Int -> Int.
  // Return the first position that elements of a and b are different
  // from i.
  for(; i < a.size(); i++)
    if(a[i] != b[i])
      return i;
  return -1;
}

bool areSimilar(std::vector<int> a, std::vector<int> b) {
  // areSimilar : [Int], [Int] -> Bool.
  // Find similar Arrays, arrays are similar iff it is equal by swapping
  // only one pair of it elements.
  int pos1, pos2;
  pos1 = diff_pos(a, b);
  if(pos1 == -1) return true;
  pos2 = diff_pos(a, b, pos1 + 1);
  if(pos2 == -1) return false;
  if(a[pos1] != b[pos2] || a[pos2] != b[pos1]) return false;
  return diff_pos(a, b, pos2 + 1) == -1;
}
