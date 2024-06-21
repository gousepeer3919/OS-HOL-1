#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    pid_t pid = fork();
    if (pid > 0)
    {
        printf("Child waiting for parent process to get free\n");
        printf("ENTER to exit parent process\n");
        getchar();
    }
    else
        exit(0);
}