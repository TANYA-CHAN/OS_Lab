#include <stdio.h>
#include "server.h"

int main(void){
   int arr[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int ele =9;
   int found = iterative(arr, 0, n-1, ele);
   if(found == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d\n",found);
   }
   return 0;
}
