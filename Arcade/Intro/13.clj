(defn reverseInParentheses [inputString]
  "Reverse string inside parentheses.
   Solution of luizsol."
  (let [pattern (re-find #"\([^()]*\)" inputString)] ; Use regex to find the right most parentheses
    (if (nil? pattern) inputString
        (reverseInParentheses
         (clojure.string/replace inputString
                                 pattern
                                 (clojure.string/reverse
                                  (subs pattern 1 (dec (count pattern)))))))))
