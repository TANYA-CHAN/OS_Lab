#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "server.h"
//The clock() function returns the approximate processor time that is consumed by the program. The clock() time depends upon how the operating system allocate resources to the process hence clock() time may be slower or faster than the actual clock.
//The C library function clock_t clock(void) returns the number of clock ticks elapsed since the program was launched. 
//To get the number of seconds used by the CPU, it is divide by CLOCKS_PER_SEC.
//On a 32 bit system where CLOCKS_PER_SEC equals 1000000 this function will return the same value approximately every 72 minutes.
//This function returns the number of clock ticks elapsed since the start of the program. On failure, the function returns a value of -1.

int main()
{
int key, arr[50], n;
clock_t start,end;
double time_elapsed(clock_t start, clock_t end)
{
double cpu_time_used;
cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
return cpu_time_used;
}
printf("Enter array size:\n");
scanf("%d", &n);
printf("Enter the array elements: \n");
for(int i=0; i<=n-1;i++)
{scanf("%d", &arr[i]);}
printf("Enter the search element:\n");
scanf("%d",&key);
start = clock();
int var1 = searchFirstOccurrence(arr, n, key);
end = clock();
if(var1 == -1)
printf("Failed\n");
else
{
printf("1st occurrence at position %d\n", var1);
printf("%lf seconds spent on searchFirstOccurrence()\n", time_elapsed(start, end));
}
//test
start = clock();
int var2 = searchLastOccurrence(arr, n, key);
end=clock();
if(var2==-1)
printf("Not found\n");
else 
{
printf("last occurrence at position %d\n", var2);
printf("%lf seconds spent on searchLastOccurrence()\n", time_elapsed(start, end));
}
//test
start=clock();
int counter = numOccurrences(arr, n, key);
end=clock();
if(counter==0)
printf("Failed\n");
else
{
printf("Total number of times this digit appeared: %d\n", counter);
printf("%lf seconds is spent on numOccurrences()\n", time_elapsed(start, end));
}}

