#include <stdio.h>
#include <sys/types.h>
#include<unistd.h>
int main()
{
int a = 5;
pid_t PID;
printf("Original value: %d\n", a);
PID= fork();
if(PID == 0)
{
printf("Child has a value as: %d\n",--a);}
else {
a++;
printf("Parent has a value as: %d\n",a);}
return 0;
}
