//Must add/important headers
#include <stdio.h>
#include <unistd.h>//for fork()
#include <sys/wait.h>//for wait()

int main(){

    pid_t pid=fork();
    if( pid==0 )
    {
    
        //child process
    
        printf("Child: I am doing my assignment rn. . .\n");

    
        sleep(3);//tells the os to pause the children for 3 seconds.

    
        printf("Child: Homework finished! I am terminating now.\n");
    }

    else if( pid>0 ) {
        //parent process
        printf("Parent: I am waiting for the child to finish work.\n");

        wait(NULL);//parent waits untill the process completely terminates

        printf("Parent: The child is done! Now I can terminate.\n");

    }
    else{
        printf("Fork failed!\n");

    }

    return 0;

}