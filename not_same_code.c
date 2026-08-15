#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Only one process is running.\n\n");

    pid_t pid =fork();
    
    if( pid==0 ){
    printf("I am child process (My PID : %d)\n ", getpid());
    printf("Child : I am doing homework\n");
    }

    else if(pid>0){
        printf("I am the parant process (My PID : %d)\n", getpid());
        printf("Parent: I am watching the Tv\n");

    }

    else{
        //only if the computer runs out of memory the clone fails
        printf("Fork failed\n");
    }

    return 0;
}