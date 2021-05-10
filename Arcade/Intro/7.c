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
  for(i = 0; i < s.size - 1; i++)
    if(s.arr[i] >= s.arr[i + 1])
      break;
  return i;
}

bool is_increasing_case_rm_ith(arr_integer s, int i) {
  /* Check case s is increasing removing element i_th. */
  if(i == 0) return true;        /* Case i_th is the first element. */
  if((i + 1) == s.size) return true; /* Case i_th is the last */
  if(s.arr[i - 1] < s.arr[i + 1]) return true; /* Like rm i_th */
  return false;
}

bool is_sorted(arr_integer s, int i) {
  /* Check if s is sorted by >. */
  for(; (i + 1) < s.size; i++)   /* i + 1, in case last element. */
    if(s.arr[i] >= s.arr[i + 1]) return false;
  return true;
}

bool almostIncreasingSequence(arr_integer sequence) {
  /*Determine whether it is possible to obtain a strictly increasing
    sequence by removing no more than one element from the array.*/
  int idx = find_position_of_not_increasing(sequence);
  if(is_increasing_case_rm_ith(sequence, idx))
    return is_sorted(sequence, idx);
  return false;
}
