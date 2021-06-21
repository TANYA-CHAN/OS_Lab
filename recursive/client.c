#include <stdio.h>
#include "server.h"

int main(void){
  int arr[] = {22, 56, 45, 100, 343, 12, 90};
  int n = 7;
  int ele = 100;
  int position = recursive(arr, 0, n-1, ele);
  if(position == -1 ) {
      printf("Element not found in the array ");
  }
  else {
      printf("Element found at index : %d",position);
  }
  return 0;
}
