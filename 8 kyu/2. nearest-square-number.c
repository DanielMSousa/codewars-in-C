//Find Nearest square number
//https://www.codewars.com/kata/5a805d8cafa10f8b930005ba

#include <math.h>

int nearest_sq(int n){
  // Your solution goes here!!
  return pow(round(sqrt(n)), 2);
}