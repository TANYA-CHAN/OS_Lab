#include <stdio.h>
#include "server.h"
#include <stdio.h>
int recursive(int arr[], int start, int end, int ele){
  if (end >= start){
      int mid = start + (end -start)/2;
      if (arr[mid] == ele)
         return mid;
      if (arr[mid] > ele)
         return recursive(arr, start, mid-1, ele);
      return recursive(arr, mid+1, end, ele);
  }
  return -1;
}
