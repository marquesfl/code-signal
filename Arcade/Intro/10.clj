(defn commonCharacterCount [s1 s2]
  "Count the numbers of common character between two strings."
  (let [inter (clojure.set/intersection (set s1) (set s2))
        dict1 (frequencies s1)
        dict2 (frequencies s2)]
    (apply +
           (map #(min (dict1 %) (dict2 %)) inter))))
