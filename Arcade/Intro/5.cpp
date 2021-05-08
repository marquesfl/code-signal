int shapeArea(int n) {
  /*Find the area of the polign given by f(n) = f(n-1) 2n + 2(n-1)*/
  return n * n + (n - 1) * (n - 1);
}
