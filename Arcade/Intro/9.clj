(defn allLongestStrings [inputArray]
  "allLongeststrings : [Str] -> [Str].
  Return a list of biggest strings in inputArray."
  (let [max_len (apply max (map count inputArray))]
    (filter #(= (count %) max_len) inputArray)))
