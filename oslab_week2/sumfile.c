#include<stdio.h>
#include<stdlib.h>
#include <string.h>
//In C, the atoi() function converts a string to an integer.
int main(int argc, char **argv)
{
int num;
int sum=0;
int temp=1;
while(argv[temp]!=NULL)
{
num = atoi(argv[temp]);
sum = sum+num;
temp++;
}
printf("Sum: %d\n", sum);
return 0;
}
