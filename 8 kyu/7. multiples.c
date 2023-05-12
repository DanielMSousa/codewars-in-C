#include <stddef.h>

typedef unsigned int uint;

void find_multiples (uint n, uint limit, size_t *count, uint multiples[]) {
    *count = 0;
    int i = n;
  
    while(i <= limit){
      if(i % n == 0){
        *count = *count + 1;
        multiples[*count - 1] = i;
      }
        i++;
    }
}