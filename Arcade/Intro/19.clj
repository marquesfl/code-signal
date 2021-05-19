(defn areEquallyStrong [yourLeft yourRight friendsLeft friendsRight]
  "areEquallyStrong : Int, Int, Int, Int -> Bool
   Each input represent the strength of an arm, see if they are
   equivalent strong."
  (or (and (= yourLeft friendsLeft) (= yourRight friendsRight))
      (and (= yourLeft friendsRight) (= yourRight friendsLeft))))
