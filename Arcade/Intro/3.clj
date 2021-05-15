(defn checkPalindrome [inputString]
  "checkpalindrome : Str -> Bool.
   Check palindrome of a string."
  (= inputString (clojure.string/reverse inputString)))
