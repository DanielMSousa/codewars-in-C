//Opposites attract
//https://www.codewars.com/kata/555086d53eac039a2a000083

#include <stdbool.h>

bool lovefunc(int flower1, int flower2){
  if((flower1 + flower2) % 2 == 0){
    return false;   
  }
  return true;
}