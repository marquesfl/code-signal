(defn avoidObstacles [inputArray]
  "avoidObstacles : [Int] -> Int.
  Number of jumps to evict the values given inside a rule.
  By quan_n37"
  (loop [i 2]
    (if (some #(zero? (mod % i)) inputArray) (recur (inc i)) i)))
