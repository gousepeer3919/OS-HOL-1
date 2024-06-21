#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    int pid_1, pid_2, pid_3;
    if (!(pid_1 = fork()))
    {
        sleep(2);
        printf("This is other child process\n");
    }
    
    else if (!(pid_3 = fork()))
    {
        sleep(6);
        printf("This is other child process\n");
    }
    else if (!(pid_2 = fork()))
    {
        sleep(4);
        printf("This is the child process for which the parent is waiting\n");
    }
    waitpid(pid_2, NULL, 0);
}