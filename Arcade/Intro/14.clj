(defn alternatingSums [a]
  "alternatingsums : [Int] -> (Int, Int).
  Alternating sum.
  By froks."
  [(apply + (take-nth 2 a))             ; First sum
   (apply + (take-nth 2 (rest a)))])    ; Second sum
