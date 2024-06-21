#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int ftain(int argc, char *argv[])
{
    struct stat buff;
    int fd;
    fd = open(argv[1] , O_RDONLY);

    if(fd == -1)
    {
        printf("failed to open the file\n");
    }
    else if(fd > -1)
    {
        printf("file opened sucessfully\n");
    }

    stat(argv[1], &buff);
    int ft = buff.st_mode;

    if (S_ISLNK(ft))
    {
        printf("link file\n");
    }
    else if (S_ISREG(ft))
    {
        printf("regular file\n");
    }
    else if (S_ISBLK(ft))
    {
        printf("block file\n");
    }
    else if (S_ISDIR(ft))
    {
        printf("directory\n");
    }
    else if (S_ISCHR(ft))
    {
        printf("character file\n");
    }
    else if (S_ISFIFO(ft))
    {
        printf("fifo\n");
    }
    else
    {
        printf("unknown file type\n");
    }

}