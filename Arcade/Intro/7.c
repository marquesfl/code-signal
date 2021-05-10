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

bool almostIncreasingSequence(arr_integer sequence) {
  /*Determine whether it is possible to obtain a strictly increasing
    sequence by removing no more than one element from the array.*/
  int idx = find_position_of_not_increasing(sequence);
  if(idx == 0) return is_sorted_from(sequence, idx + 1); /* pos is 1st element */
  if((idx + 1) >= sequence.size || (idx + 2) >= sequence.size) return true; /* Or does not exist pos or pos is last */
  if(sequence.arr[idx - 1] < sequence.arr[idx + 1]) return is_sorted_from(sequence, idx + 1);
  if(sequence.arr[idx] < sequence.arr[idx + 2]) return is_sorted_from(sequence, idx + 2);
  return false;
}
