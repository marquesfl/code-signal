int adjacentElementsProduct(std::vector<int> inputArray) {
  // Return the largest product of adjacent elements of an array.
  int max,                      // Temporary var for maximum value
    tmp;                        // Temporary var for speed the product

  max = inputArray[0] * inputArray[1];
  for(int i = 1; i < inputArray.size(); i++)
    if(max < (tmp = inputArray[i] * inputArray[i + 1]))
      max = tmp;
  return max;
}
