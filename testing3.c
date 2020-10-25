#include <stdlib.h> /* for last question this is my code*/
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
	 pid_t pid=fork();
	if(pid == 0)
      {
	for(int i=0; i<4; i++)
	{	printf("what is your name?\n");
		scanf("%40s",name);
		printf("name: %s\n", name);
	}
       }
		else
		{ wait(NULL);
		  parentName();
		}
	return EXIT_SUCCESS;
}
