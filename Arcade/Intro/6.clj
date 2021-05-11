(defn makeArrayConsecutive2 [statues]
  "Minimum elements to generate a perfect consecutive in vector."
  (inc (- (apply max statues) (apply min statues) (count statues))))
