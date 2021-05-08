int shapeArea(int n) {
  if(n == 1)
    return 1;
  return shapeArea(n - 1) + 2 * n + 2 * (n - 2);
}
