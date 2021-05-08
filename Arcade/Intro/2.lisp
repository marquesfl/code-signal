(defconstant CENTURY 100
  "Define a constant for the value of a century.")

(defun centuryFromYear (year)
  "Given a year its return the century."
  (ceiling (/ year CENTURY)))
