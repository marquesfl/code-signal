(defn sum_ [f l]
  "Sum of alternative elements."
  (cond
    (empty? l) 0
    (not f) (sum_ (not f) (rest l))
    :otherwise (+ (first l) (sum_ (not f) (rest l)))))

(defn alternatingSums [a]
  "Given a list do a sum of alternative elements."
  [(sum_ true a) (sum_ false a)])
