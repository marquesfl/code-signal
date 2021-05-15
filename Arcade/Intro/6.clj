(defn makeArrayConsecutive2 [statues]
  "makeArrayConsecutive : [Int] -> Int.
   Minimum elements to generate a perfect consecutive in vector."
  (inc (- (apply max statues) (apply min statues) (count statues))))
