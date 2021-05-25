bool some_div2(std::vector<int> v, int d) {
  // some_div2 : [Int], Int -> Bool
  // Return true case some element of v is divisible by d.
  for(auto x : v) {
    if((x % i) == 0) {return true;}
  }
  return false;
}

int avoidObstacles(std::vector<int> inputArray) {
  // avoidObstacles : [Int] -> Int.
  // Number of jumps to evict the values given inside a rule.
  // By quan_n37
  for(int i = 2; true; i++) {
    if(!some_div2(inputArray, i)) {return i;}
  }
  return i;
}
