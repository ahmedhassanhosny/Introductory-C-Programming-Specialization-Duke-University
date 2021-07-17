#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

int main (void){
  
  int arr[4] = {1,3,3,4};
  size_t n = maxSeq(arr,4);
  if(n!=2) return EXIT_FAILURE;

  int arr1[6] = {1,2,-3,4,5,9};
  size_t n1 = maxSeq(arr1,6);
  if(n1!=4) return EXIT_FAILURE;

  int arr2[4] = {5,4,2,0};
  size_t n2 = maxSeq(arr2,4);
  if(n2!=1) return EXIT_FAILURE;

  int arr3[0];
  size_t n3=maxSeq(arr3,0);
  if(n3!=0) return EXIT_FAILURE;
  
  
  
  	      
  return EXIT_SUCCESS;
}
