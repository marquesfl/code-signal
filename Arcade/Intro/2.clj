(defn centuryFromYear [year]
  "centuryfromyear : Int -> Int.
   Return the century of year."
  (int (Math/ceil (/ year 100))))
