#include<cmath>

int centuryFromYear (int year) {
  // Return the century of year
  const int CENTURY = 100;	// Define a constant for the value of
				// century.
  return ceil (year / 100.);
}
