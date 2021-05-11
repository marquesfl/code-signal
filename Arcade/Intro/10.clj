(defn commonCharacterCount [s1 s2]
  "Count the numbers of common character between two strings."
  (count (clojure.set/intersection (set s1) (set s2))))
