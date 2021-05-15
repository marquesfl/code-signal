(defn put_border [a c]
  "put_border : [Str], Char -> [Str].
  Put * at the init and last element of a."
  (map #(apply str (concat c % c)) a))

(defn make_str [n c]
  "make_str : Int, Char -> [Str].
  Make a string with length n and initial value c."
  (clojure.string/join (repeat n c)))

(defn addBorder [picture]
  "addBorder : [Str] -> [Str].
  Given a rectangular matrix of characters, add a border of
  asterisks(*) to it."
  (let [tmp (put_border picture "*")
        ast_border (make_str (count (first tmp)) "*")]
    (concat (cons ast_border tmp) (cons ast_border nil))))
