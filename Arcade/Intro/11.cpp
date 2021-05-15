#include<cmath>

int summation10(int& n, int len) {
  // summation10 : Int, Int -> Int.
  // Sum each digits.
  int sum = 0;
  for(int i = 0; i < len; n /= 10, i++)
    sum += n % 10;
  return sum;
}
bool isLucky(int n) {
  // isLucky : Int -> Bool.
  // Determine if n is a luck number. To be luck, he sum of the first
  // half of the digits is equal to the sum of the second half.
  int half_dig = ((int) log10(n) + 1) >> 1; // Determine the quantity
                                           // of half of digits of n
  return summation10(n, half_dig)
    == summation10(n, half_dig);
}
    

  
