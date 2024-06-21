#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd;
    char buff[1024];
    fd = open("8.txt", O_RDONLY);

    while (read(fd, buff, 1))
    {
        printf("%c", buff[0]);
    }
    close(fd);
}