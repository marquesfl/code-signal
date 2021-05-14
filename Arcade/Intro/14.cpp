std::vector<int> alternatingSums(std::vector<int> a) {
  // Alternating sum.
  bool flag = true;
  std::vector<int> sum_ = {0, 0};

  for(auto& x : a) {
    if(!flag) {
      sum_[1] += x;
    }
    else {
      sum_[0] += x;
    }
    flag = !flag;
  }
  return sum_;
}
