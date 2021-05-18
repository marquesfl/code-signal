int arrayChange(std::vector<int> inputArray) {
  // arraychange : [Int] -> Int.
  // Increase by one the elements inside inputArray until its
  // increasing array.
  int acumulator = 0;
  
  for(int i = 1; i < inputArray.size; i++) {
    int tmpSub = inputArray[i - 1] - inputArray[i];
    if(tmpSub >= 0) {
      inputArray[i] += tmpSub + 1;
      acumulator += tmpSub + 1;
    }
  }
  
  return acumulator;
}
