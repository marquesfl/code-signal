(defun oddSum (n)
  "Calculate 1 + 3 + 5 + 7+ ..."
  (* n n))

(defun shapeArea (n)
  "Note that: it is the odd sum from 1 to n plus the same sum from 1
   to n -1"
  (+ (oddSum n) (oddSum (1- n))))
