#include<cmath>

bool isLucky(int n) {
  // Determine if n is a luck number. To be luck, he sum of the first
  // half of the digits is equal to the sum of the second half.
  int half_dig = ((int) log10(n) + 1) >> 1; // Determine the quantity
                                           // of half of digits of n
  int sum1, sum2;
  sum1 = sum2 = 0;              // Summation
  for(int i = 0; i < half_dig; n /= 10, i++) // Sum 1st half
    sum1 += n % 10;
  for(int i = 0; i < half_dig; n /= 10, i++)
    sum2 += n % 10;
  return sum1 == sum2;
}
    

  
