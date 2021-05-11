(defn centuryFromYear [year]
  "Return the century of year."
  (int (Math/ceil (/ year 100))))
