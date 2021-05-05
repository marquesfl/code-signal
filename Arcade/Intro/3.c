#include <string.h>

#define TRUE 1
#define FALSE 0

bool checkPalindrome(char* inputString) {
  /*Check palindrome of a string.*/
  int i, j;
  i = 0;                        /*Iterator of the begging of
                                  inputString*/
  j = strlen(inputString);      /*Iterator of the end of inputString*/
  while(i < j) {                /*Using i < j will let the loop run at
                                  half of inputString.*/
    if(inputString[i++] != inputString[--j]) {
      return FALSE;
    }
  }
  return TRUE;
}
