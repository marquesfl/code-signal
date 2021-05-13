#include<vector>

std::vector<int> sortByHeight(std::vector<int> a) {
  // Sort a without sorting -1.
  for(int i = 0; i < a.size(); i++) { // adapt-inserctiosort
    if(a[i] == -1) continue;
    for(int j = i + 1; j < a.size(); j++) {
      if(a[j] == -1) continue;
      if(a[j] < a[i]) std::swap(a[i], a[j]);
    }
  }
  return a;
}
