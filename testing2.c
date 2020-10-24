#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

void parentName(){
printf("The Job is done\n");
}

int main(void)
{
	 char name[40];

     	for (int i=0; i<6; i++)
	{	pid_t pid=fork();
	    if(pid == 0)
          {
		  printf("what is your name:\n");
	          scanf("%40s",name);
	 	  printf("Name:%s\n", name);
	 	  break;
          }
	}
		 wait(NULL);
		parentName();

   return (0);
}
