(defn shapeArea [n]
  "Find the area of the polign given by f(n) = f(n - 1) + 2n + 2(n-1)"
  (int (+ (Math/pow n 2) (Math/pow (dec n) 2))))
