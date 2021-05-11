(defn rm-pos [i s]
  "Remove element in s at i_th position."
  (cond
    (= i 0) (subvec s 1)
    (= (inc i) (count s)) (subvec s 0 i)
    :else (concat (subvec s 0 i) (subvec s (inc i)))))

(defn sort? [s]
  "Check of s is increasing sorted vector."
  (every? #(< % 0) (map - s (rest s))))

(defn almostIncreasingSequence [sequence]
  "Determine whether it is possible to obtain a strictly increasing
    sequence by removing no more than one element from the array."
  (let [p (keep-indexed #(if (< %2 1) %1) (map - (rest sequence) sequence))]
    (cond
      (empty? p) true
      (sort? (rm-pos (first p) sequence)) true
      :else (sort? (rm-pos (inc (first p)) sequence)))))
