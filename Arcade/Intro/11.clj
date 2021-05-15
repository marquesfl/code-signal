(defn isLucky [n]
  "isLucky : Int -> Bool.
  Determine if n is a luck number. To be luck, he sum of the first
  half of the digits is equal to the sum of the second half."
  (let [str_ (str n)
        half (bit-shift-right (count str_) 1) ; Div str_ length in half
        [str1 str2] (split-at half str_)]  ; Split str_ in half
    (= (apply + (map int str1)) (apply + (map int str2)))))
