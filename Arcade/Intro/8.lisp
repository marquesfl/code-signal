(defun matrixElementsSum (matrix)
  "Sum element of transpose matrix while not zero element"
  (let ((l (array-dimension matrix 0))
        (c (array-dimension matrix 1)))
    (loop for j from 0 below c sum
                               (loop for i from 0 below l while (not (zerop (aref matrix i j))) sum
                                                                                              (aref matrix i j)))))
                                    
