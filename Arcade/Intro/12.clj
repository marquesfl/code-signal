(defn insertByHeight [lst_ lst_pos]
  "insertByheight : [Int], [Int] -> [Int].
  Insert lst_pos without moving -1 elements."
  (cond
    (empty? lst_) nil
    (pos? (first lst_)) (cons (first lst_pos) (insertByHeight (rest lst_) (rest lst_pos)))
    :else (cons (first lst_) (insertByHeight (rest lst_) lst_pos))))

(defn sortByHeight [a]
  "sortbyheight : [Int] -> ([Int], [Int] -> [Int]) -> [Int].
  Sort a without sorting -1."
  (let [lst (sort (filter pos? a))]
    (insertByHeight a lst)))
