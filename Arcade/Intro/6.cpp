int makeArrayConsecutive2(std::vector<int> statues) {
  // makeArrayConsecutive : [Int] -> Int.
  // Minimum elements to make a perfect consecutive elements in a
  // vector.
  return std::max_element(statues.begin(), statues.end())
    - std::min_element(statues.begin(), statues.end())
    - statues.size() + 1;
}
