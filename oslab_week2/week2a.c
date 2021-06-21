#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
int pid;
pid=fork();
if(pid<0)
{
printf("error\n");
exit(1);
}
else if(pid==0)
{
printf("child\n");
execl("/root/abc","abc","abc",(char *)0);
}
else
{
wait(NULL);
printf("parent\n");
execl("/bin/ls","ls","-l",(char *)0);
execlp("ls","ls","-l", (char *)0);
}
return 0;
}
