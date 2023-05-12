//Get the mean of an array
//https://www.codewars.com/kata/563e320cee5dddcf77000158

#include <stddef.h>

int get_average(const int *marks, size_t count){
  int sum = 0;
  for(int i = 0; i < count; i++){
    sum += marks[i];
  }
  return (int) sum/count;
}