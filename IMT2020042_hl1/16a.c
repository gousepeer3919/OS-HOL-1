#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>


int main(void)
{
    struct flock lk;

    int fd;
    fd = open("10.txt", O_WRONLY);

    if (fd == -1)
    {
        printf("failed to open file\n");
    }
    else if (fd > -1)
    {
        lk.l_type = F_WRLCK;
        lk.l_whence = SEEK_SET;
        lk.l_start = 0;
        lk.l_len = 0;
        lk.l_pid = getpid();

        fcntl(fd, F_SETLKW, &lk);
        printf("Write locked the file. Press any key to unlock\n");
        getchar();
        lk.l_type = F_UNLCK;
        fcntl(fd, F_SETLK, &lk);
        printf("file unlocked\n");
    }
}