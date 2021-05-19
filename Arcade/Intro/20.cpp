int abs_diff(int idx, std::vector<int> v) {
  // abs_diff : Int, [Int] -> Int
  // Return Absolute value of the diff between idx_th and before.
  return abs(v[idx - 1] - v[idx]);
}

int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
  // arraymaximaladjacentdifference : [Int] -> Int.
  // Given an array of integers, find the maximal absolute difference
  // between any two of its adjacent elements."
  int max_value;

  max_value = abs_diff(1, inputArray);
  for(int i = 2; i < inputArray.size(); i++) {
    int tmp;
    if(max_value < (tmp = abs_diff(i, inputArray))) {
      max_value = tmp;
    }
  }
  return max_value;
}
