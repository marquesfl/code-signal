typedef int type;

typedef struct arr_integer {
  int size;
  type *arr;
} arr_integer;

arr_integer alloc_arr_integer (int len) {
  arr_integer a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
  return a;
}

int makeArrayConsecutive2(arr_integer statues) {
  /*Minimum elements to make a perfect consecutive elements in a
    vector.*/
  int i,                        /* Iterator */
    max,                        /* Var for Maximum value */
    min;                        /* Var for Minimum value */

  max = min = statues.arr[0];
  for(i = 0; i < statues.size; i++) {
    max = (max < statues.arr[i]) ? statues.arr[i] : max;
    min = (min > statues.arr[i]) ? statues.arr[i] : min;
  }
  return max - min - statues.size;
}
