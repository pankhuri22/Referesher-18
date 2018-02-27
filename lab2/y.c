#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <ctype.h>
//#include <readline.h>
//#include <readline/history.h>

char *strlwr(char *s);
int is_exit(char *s);



//char **tokenizer(char *line);


int main()
{
    int pid;
    while(1)
    {
        char usr_cmd[10];
        char myExit[]="exit";
        
        //print prompt
        printf("%s","v_sh>>");

        scanf("%s" , usr_cmd);
    //    fgets(usr_cmd,10,stdin);
        
        //exit case
        if(is_exit(usr_cmd)){
            return 0;
        }
        
        char *tokens[10];
        int i=0;
        tokens[i]= strtok(usr_cmd, " ");
        while(tokens[i] != NULL){
            tokens[++i] = strtok(NULL , " ");
        }
        
        //pid=fork();
        
        if (fork()==0)
        {
            printf("%s\n","child" );
            
            execvp(tokens[0],tokens);
            
            
            
            
        }
        
        else{
            wait(0);
            return 0;
        }
        
        
        
    }
}

char *strlwr(char *s)
{
    for(int i = 0; s[i]; i++){
        s[i] = tolower(s[i]);
    }
    return s;
    
}

int is_exit(char *s){
    if(tolower(s[0])=='e' && tolower(s[1])=='x'&& tolower(s[2])=='i' && tolower(s[3])=='t'){
        return 1;
    }
    else return 0;
}
