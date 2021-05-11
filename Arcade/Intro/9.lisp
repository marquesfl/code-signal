(defun allLongestStrings (inputArray)
  "Return a list of biggest strings in inputArray."
  (let* ((str_len_lst (map 'vector #'length inputArray)) ; Find each length
         (max_len (max str_len_lst)))                    ; Find max length
    (remove-if #'not (map 'vector #'(lambda (x y) (if (= x max_len) y)) str_len_lst inputArray))))
