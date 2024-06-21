#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    if (!fork())
    {
        setsid();
        chdir("/");
        umask(0);
        int fd = open("daemon.txt", O_RDWR | O_CREAT);
        while (1)
        {
            sleep(3);
            printf("This is the Daemon process\n");
        }
        return (0);
    }
    else
        exit(0);
}