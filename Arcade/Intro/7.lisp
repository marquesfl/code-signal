(defun sortp (s)
  "Check if s is sorted by >."
  (every #'< s (subseq s 1)))

(defun rm-pos (i s)
  "Remove element at position i."
  (cond
    ((= i 0) (subseq s 1))
    ((= (1+ i) (length s)) (subseq s 0 i))
    (t (concatenate 'vector (subseq s 0 i) (subseq s (1+ i))))))

(defun almostIncreasingSequence (sequence)
  "Determine whether it is possible to obtain a strictly increasing
   sequence by removing no more than one element from the array."
  (let ((p (position-if #'(lambda (x) (< x 1)) (map 'vector #'- (subseq sequence 1) sequence))))
    (cond
      ((not p) t)
      ((sortp (rm-pos p sequence)) t)
      (t (sortp (rm-pos (1+ p) sequence))))))
