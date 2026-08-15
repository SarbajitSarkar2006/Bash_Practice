#include <stdio.h>
#include <unistd.h>
int main(){
    printf("Before fork only one process is running\n\n");

    fork();

    printf("Hello! we are executing the exact same code! (my PID: %d)\n", getpid());

    return 0;
}