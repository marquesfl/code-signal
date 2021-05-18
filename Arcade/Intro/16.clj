(defn are_similar [a b ab]
  "are_similar : [Int], [Int], [Bool] -> Bool.
   Check similar from ab."
  (let [ab_index (map-indexed vector ab)
        false_pos (filter #(false? (second %)) ab_index)]
    (and (= (get a (first (first false_pos))) (get b (first (second false_pos))))
         (= (get a (first (second false_pos))) (get b (first (first false_pos)))))))

(defn areSimilar [a b]
  "areSimilar : [Int], [Int] -> Bool.
   Find similar Arrays, arrays are similar iff it is hequal by swapping
   only one pair of it elements."
  (if (= a b) true
      (let [eq_lst (map = a b)
            diff_a (clojure.set/difference (set a) (set b))
            diff_b (clojure.set/difference (set b) (set a))]
        (cond
          (and (not (empty? diff_a)) (not (empty? diff_b))) false
          (> (get (frequencies eq_lst) false) 2) false
          :otherwise (are_similar a b eq_lst)))))
