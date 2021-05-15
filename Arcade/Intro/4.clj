(defn adjacentElementsProduct [inputArray]
  "adjacentelementsproduct : [Int] -> Int.
   Return the largest product of adjacent elements in array."
  (apply max (map * inputArray (rest inputArray))))
