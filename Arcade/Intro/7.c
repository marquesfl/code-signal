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

bool is_sorted(arr_integer s, int i) {
  /* Check if s is sorted by >. */
  for(; (i + 1) < s.size; i++)   /* i + 1, in case last element. */
    if(s.arr[i] >= s.arr[i + 1]) return false;
  return true;
}

bool almostIncreasingSequence(arr_integer sequence) {
  /*Determine whether it is possible to obtain a strictly increasing
    sequence by removing no more than one element from the array.*/
  int i;
  for(i = 1; i < sequence.size; i++)
    if(sequence.arr[i - 1] >= sequence.arr[i]) {
      if((i - 2) >= 0) {
	if(sequence.arr[i - 2] >= sequence.arr[i]) {
	  if((i + 1) < sequence.size) {
	    if(sequence.arr[i - 1] >= sequence.arr[i + 1]) {
	      return false;
	    }
	    else {
	      i += 1;
	      break;
	    }
	  }
	}
	else {
	  break;
	}
      }
      else {
	break;
      }
    }

  return is_sorted(sequence, i + 1);
}
