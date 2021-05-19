(defn listAdjacentDiff [lst]
  "listadjacentdiff : [Int] -> [Int]
  Generate a list with the differences between
  adjacent elements."
  (map #(Math/abs %) (map - lst (rest lst))))

(defn arrayMaximalAdjacentDifference [inputArray]
  "arraymaximaladjacentdifference : [Int] -> Int.
   Given an array of integers, find the maximal absolute difference
   between any two of its adjacent elements."
  (apply max (listAdjacentDiff inputArray)))
