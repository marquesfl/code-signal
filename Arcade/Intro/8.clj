(defn transpose [m]
  "transpose : [[A]] -> [[A]]
  Return the transpose of m."
  (apply mapv vector m))

(defn matrixElementsSum [matrix]
  "matrixelementssum : [[Int]] -> Int.
  Sum elements of transpose matrix while not zero element in line."
    (reduce + (map #(reduce + (take-while (complement zero?) %))
       (transpose matrix))))
