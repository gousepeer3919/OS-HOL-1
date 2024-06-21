#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    pid_t pid = fork();
    if (!pid)
    {
        printf("Child process pid before parent terminated %d\n", getppid());
        sleep(4);
        printf("Child process pid after parent terminated %d\n", getppid());
    }
    else
    {
        printf("Parent process pid %d\n", getpid());
    }
}