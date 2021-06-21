#include<stdio.h>
#include<unistd.h> //execv
#include<stdlib.h>
#include<sys/wait.h>
#include <string.h>
int main()
{
pid_t PID = fork();
if(PID<0)
{
printf("fork error\n");
exit(1);
}
else if(PID ==0)
{
static char *arg_list[] = {"./sumfile","435","313","235","3227", NULL};
execv(arg_list[0], arg_list);
printf("addition is done in child process\n");
exit(1);
}
if(PID>0)
{
while(wait(NULL)>0)
printf("this is parent process\n");
}
return 0;
}
