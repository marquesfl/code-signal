(defn arrayChange [inputArray]
  "arrayChange : [Int] -> Int.
   Increase by one the elements inside inputArray until its
   increasing array.
   By diko1"
  (loop [[first_ second_ & rest_] inputArray
         moves 0]
    (cond
      (nil? second_) moves
      (< first_ second_) (recur (cons second_ rest_) moves)
      :otherwise (let [diff (inc (- first_ second_))]
                   (recur (cons  (inc first_) rest_) (+ moves diff))))))

