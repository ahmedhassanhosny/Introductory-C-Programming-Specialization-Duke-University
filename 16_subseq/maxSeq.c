#include <stdio.h>

size_t maxSeq(int *array, size_t n){
  int max_inc=0,counter =  1;
  if (n<=0) return 0;
  
  for(size_t i=1;i<n;i++){
    if(array[i-1]<array[i]){
      counter++;
      }
    else{
      if (max_inc<counter) max_inc = counter;
    counter =1;
    
    }

  }
  if (max_inc<counter) max_inc = counter;
  return max_inc;
  
}

