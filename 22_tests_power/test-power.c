#include <stdlib.h>
#include "power.c"

int main (void){
  if(!(power(2,2)==4))
    return EXIT_FAILURE;
  if(!(power(0,0)==1))
    return EXIT_FAILURE;
  if(!(power(0,1)==0))
    return EXIT_FAILURE;
  if(!(power(1,0)==1))
    return EXIT_FAILURE;
  if(!(power(1,10)==1))
    return EXIT_FAILURE;
  if(!(power(9,1)==9))
    return EXIT_FAILURE;
  if(!(power(10,5)==100000))
    return EXIT_FAILURE;
 
  
  return EXIT_SUCCESS;
}

