#include <stdio.h>
#include "server.h"

int iterative(int arr[], int start, int end, int ele){
   while (start <= end){
      int middle = start + (end- start)/2;
      if (arr[middle] == ele)
         return middle;
      if (arr[middle] < ele)
         start = middle + 1;
      else
         end = middle - 1;
   }
   return -1;
}
