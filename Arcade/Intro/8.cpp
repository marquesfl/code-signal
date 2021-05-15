int matrixElementsSum(std::vector<std::vector<int>> matrix) {
  // matrixelementssum : [[Int]] -> Int.
  // Sum element of transpose matrix while not zero element.
  int i, j, s;
  s = 0;                        // To summation
  for(j = 0; j < matrix[0].size(); j++)
    for(i = 0; i < matrix.size(); i++) {
      if(matrix[i][j] == 0) break;
      s += matrix[i][j];
    }

  return s;
}
