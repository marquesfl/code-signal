(defn checkPalindrome [inputString]
  "Check palindrome of a string."
  (= inputString (clojure.string/reverse inputString)))
