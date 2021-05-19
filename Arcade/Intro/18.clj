(defn palindromeRearranging [inputString]
  "palindromeRearranging : Str -> Bool.
  Check if in freq of inputstring cointains more than one odd
  number."
  (-> inputString
      (frequencies ,,,)
      (vals ,,,)
      (filter odd? ,,,)
      (count ,,,)
      (<= ,,, 1)))
