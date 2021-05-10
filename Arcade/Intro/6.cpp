int makeArrayConsecutive2(std::vector<int> statues) {
  // Minimum elements to make a perfect consecutive elements in a
  // vector.
  int min, max;
  min = max = statues[0];
  for(auto x : statues) {
    min = (min > x) ? x : min;
    max = (max < x) ? x : max;
  }
  return max - min - statues.size() + 1;
}

int makeArrayConsecutive2_2(std::vector<int> statues) {
  // Minimum elements to make a perfect consecutive elements in a
  // vector.
  return std::max_element(statues.begin(), statues.end())
    - std::min_element(statues.begin(), statues.end())
    - statues.size() + 1;
}
