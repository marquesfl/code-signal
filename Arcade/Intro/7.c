// Arrays are already defined with this interface:

typedef int type;

typedef struct arr_integer {
  int size;
  type *arr;
} arr_integer;

arr_integer alloc_arr_integer(int len) {
  arr_integer a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
  return a;
}

typedef enum bool {false, true} bool;

int find_position_of_not_increasing(arr_integer s) {
  /* Return the position in s which is not a increasing sequence */
  int i;
  for(i = 0; (i + 1) < s.size; i++)
    if(s.arr[i] >= s.arr[i + 1])
      break;
  return i;
}

bool is_sorted_from(arr_integer s, int i) {
  /* Return true case s is sorted from position i */
  for(; (i + 1) < s.size; i++)
    if(s.arr[i] >= s.arr[i + 1])
      return false;
  return true;
}

bool is_sorted_without_pos(arr_integer s, int pos) {
  int i;
  for(i = 0; (i + 1) < s.size; i++) {
    if(i == pos) continue;       /* Case i is pos, ignore  */
    if(i + 1 == pos && i + 2 == s.size) return true; /* case pos is last */
    if(i + 1 == pos) {                             /* Case next is pos */
      if(s.arr[i] >= s.arr[i + 2]) return false;
    }
    else {
      if(s.arr[i] >= s.arr[i + 1]) return false;
    }
  }
  return true;
}

bool almostIncreasingSequence(arr_integer sequence) {
  /*Determine whether it is possible to obtain a strictly increasing
    sequence by removing no more than one element from the array.*/
  int idx = find_position_of_not_increasing(sequence);
  if(idx + 1 == sequence.size) return true; /* idx as last position */
  if(idx == 0) return is_sorted_from(sequence, idx + 1); /* idx is first */
  if(is_sorted_without_pos(sequence, idx)) return true;
  return is_sorted_without_pos(sequence, idx + 1);
}
