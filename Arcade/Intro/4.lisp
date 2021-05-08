(defun array-tail (array)
  "Return a tail of an array."
  (subseq array 1))

(defun adjacentElementsProduct (inputArray)
  "Return the largest product of adjacent elements of an array."
  (reduce #'max (map 'list #'* inputArray (array-tail inputArray))))
