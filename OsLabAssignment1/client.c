#include<stdio.h>
#include "server.h"
int main()
{
  int n, c, d, a[100], b[100];

  printf("Enter the number of elements in array\n");
  scanf("%d", &n);

  printf("Enter array elements\n");

  for (c = 0; c < n ; c++)
    scanf("%d", &a[c]);
    reverse(n,a);

  return 0;
}
