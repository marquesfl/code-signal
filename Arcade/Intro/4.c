typedef int type;               /*Define a type-key.*/

typedef struct arr_integer {
  /*Template of array of integers.*/
  int size;
  type *arr;
} arr_integer;

arr_integer alloc_arr_integer(int len) {
  /*Allocarion memory of arr_integer.*/
  arr_integer a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
  return a;
}

int adjacentElementsProduct(arr_integer inputArray) {
  /*Return the largest product of adjacent elements of an array.*/
  int i,
    max,                        /*Temporary var for a maximum value.*/
    tmp;                        /*Temporary var for speed the product.*/

  max = inputArray.arr[0] * inputArray.arr[1];
  for(i = 1; i < inputArray.size - 1; i++) {
    if(max < (tmp = inputArray.arr[i] * inputArray.arr[i + 1])) {
        max = tmp;
      }
  }
  return max;
}
