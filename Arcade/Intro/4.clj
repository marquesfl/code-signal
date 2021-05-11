(defn adjacentElementsProduct [inputArray]
  "Retrun the largest product of adjacent elements in array."
  (apply max (map * inputArray (rest inputArray))))
