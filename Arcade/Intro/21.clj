(def re_byte_str "(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])"
  "A string to define a byte in regex.")

(defn str_concat [lst]
  "str_concat : [Str] -> Str.
  Concatenate a list of strings"
  (apply str lst))

(defn ipv4-pattern []
  "IPv4-pattern : -> re-pattern
  Return a IPv4 pattern for regex."
  (let [re-byte "(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])"]
    (re-pattern (apply str ["(" re-byte "\\.){3}" ; 3 times a byte with dot
                            re-byte]))))          ; 4th byte

(defn isIPv4Address [inputString]
  "isIPv4address : IPv4-Adress -> Bool.
   Check a valid IPv4 address."
  (if (re-matches (ipv4-pattern) inputString) true false))
