//server.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "server.h"

int searchFirstOccurrence(int arr[], int n, int key)
{
int i = 0;
while(i<n && key!=arr[i])
{i++;}
if(i<n)
{return i;} 
else { return -1;}
}

int searchLastOccurrence( int arr[], int n, int key)
{
int i=n;
while(i>=0 && key!=arr[i])
{i--;}
if(i<n)
return i;
else
return -1;
}

int numOccurrences(int arr[], int n, int key)
{ 
int i=0, count =0;
while(i<n)
{ 
if(arr[i]==key)
{count++;}
i++;
}
return count;
}

