//centuries from years
//https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097

#include <math.h>

int centuryFromYear(int year) {
  return ceil((float) year / 100);
}
