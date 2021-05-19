(defn palindromeRearranging [inputString]
  "palindromeRearranging : Str -> Bool.
  Check if in freq of inputstring cointains more than one odd
  number. Used Macro"
  (-> inputString
      (frequencies ,,,)
      (vals ,,,)
      (filter odd? ,,,)
      (count ,,,)
      (<= ,,, 1)))
