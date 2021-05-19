bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
  // areEquallyStrong : Int, Int, Int, Int -> Bool
  // Each input represent the strength of an arm, see if they are
  // equivalent strong.
  return ((yourLeft == friendsLeft) && (yourRight == friendsRight)) ||
    ((yourRight == friendsLeft) && (yourLeft == friendsRight));
}
