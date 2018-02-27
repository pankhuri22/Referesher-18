#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main ()
{
	while(1)
	{
   		char arr[100];
		scanf("%s",arr);
		char *parsed[10];
		parsed[0]=strtok(arr," ");
		int index=0;
		while(parsed[index]!=NULL)
		{
			index++;
			parsed[index]=strtok(NULL," ");
		}
   		if(strcmp(parsed[0],"exit")==0)
   			break;
   		if(fork()==0)
   		{
   			printf("%s\n","Child.");
   			execvp(parsed[0],parsed);
   			exit(1);
   		}
   		else
   		{
   			printf("%s\n","Parent.");
   			wait(0);
   		}
	}
	return 0;
}
