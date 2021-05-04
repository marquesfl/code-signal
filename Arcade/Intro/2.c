#include<math.h>

#define CENTURY 100 		/*Define a constant for the value of
				  century.*/

int centuryFromYear (int year) {
  /*Given a year its return the century.*/
  return ceil (year / 100.);
}
