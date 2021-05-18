bool areSimilar(vector<int> a, vector<int> b) {
  // areSimilar : [Int], [Int] -> Bool.
  // Find similar Arrays, arrays are similar iff it is equal by swapping
  // only one pair of it elements.
  int pos1, pos2, i;
  pos1 = pos2 = -1;
  for(i = 0; i < a.size(); i++) {
    if(a[i] != b[i]) {
      pos1 = i;
      break;
    }
  }
  for(; i < a.size(); i++) {
    if(a[i] != b[i]) {
      pos2 = i;
      break;
    }
  }
  if(a[pos1] != b[pos2] || a[pos2] != b[pos1]) return false;
  for(; i < a.size(); i++) {
    if(a[i] != b[i]) {
      return false;
    }
  }
  return true;
}
