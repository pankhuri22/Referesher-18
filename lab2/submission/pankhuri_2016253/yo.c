#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
//	int status = 1;
	while( 1)
	{
        
        char string[10];
        printf("enter sring: ");
        scanf("%s" , string);
      //  printf("string is %s " , string);
        char *array[10];
        int i=0;
        array[i]= strtok(string , " ");
        while(array[i] != NULL){
            array[++i] = strtok(NULL , " ");
        }
        
     if(strcmp(array[0], "exit")==0)
         break;
		
	
		if (fork() == 0)
		{
            printf("this is the child!\n");
            //system ;
            //printf("yo");
			execvp(array[0] , array);
            perror("execv");
            exit(1);
		}
		else
		{
			printf("this is the parent\n");
			wait(0);
		}

	}
  return 0;

}



