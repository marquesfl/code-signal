(defn between? [y x z]
  "between? : Int -> Bool.
   x <= y <= z."
  (and (<= x y) (<= y z)))

(defn byte? [str]
  "byte? : Str -> Bool.
  If str represent a byte value return true."
  (cond
    (clojure.string/blank? str) false          ; Blank string
    (not (nil? (re-find #"[^0-9]" str))) false ; Not a digit
    (not (nil? (re-find #"^0\d+" str))) false  ; a 0 left, literally
    (> (count str) 3) false                    ; number too large
    :otherwise (between? (Integer/parseInt str) 0 255)))

(defn isIPv4Address [inputString]
  "isIPv4address : IPv4-Adress -> Bool.
   Check a valid IPv4 address."
  (let [ip_lst (clojure.string/split inputString #"[.]")]
    (cond
      (not= 4 (count ip_lst)) false
      :otherwise (reduce #(and %1 %2) (map byte? ip_lst)))))
