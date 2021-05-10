int find_position_of_not_increasing(std::vector<int> s) {
  // Return the position in s which is not a increasing sequence
  int i;
  for(i = 0; (i + 1) < s.size(); i++)
    if(s[i] >= s[i + 1])
      break;
  return i;
}

bool is_sorted_from(std::vector<int> s, int i) {
  /* Return true case s is sorted from position i */
  for(; (i + 1) < s.size(); i++)
    if(s[i] >= s[i + 1])
      return false;
  return true;
}

bool almostIncreasingSequence(std::vector<int> sequence) {
  /*Determine whether it is possible to obtain a strictly increasing
    sequence by removing no more than one element from the array.*/
  int idx = find_position_of_not_increasing(sequence);
  if(idx == 0) return is_sorted_from(sequence, idx + 1); /* pos is 1st element */
  if((idx + 1) >= sequence.size() || (idx + 2) >= sequence.size()) return true; /* Or does not exist pos or pos is last */
  if(sequence[idx - 1] < sequence[idx + 1]) return is_sorted_from(sequence, idx + 1);
  if(sequence[idx] < sequence[idx + 2]) return is_sorted_from(sequence, idx + 2);
  return false;
}
