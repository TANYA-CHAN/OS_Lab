#include<stdio.h>
#include "server.h"
void reverse(int n, int a[])
{
     int c, d, b[100];
  for (c = n - 1, d = 0; c >= 0; c--, d++)
    b[d] = a[c];

  for (c = 0; c < n; c++)
    a[c] = b[c];

  printf("The array after reversal:\n");

  for (c = 0; c < n; c++)
    printf("%d\n", a[c]);
}
