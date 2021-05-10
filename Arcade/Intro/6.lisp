(defun makeArrayConsecutive2 (statues)
  "Minimum elements to make a perfect consecutive elements in a
   vector."
  (loop for x across statues
        minimize into min-val
        maximize into max-val
        finally (return (1+ (- max-val min-val (length statues))))))
