#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int fd = open("11.txt", O_APPEND | O_WRONLY);
    write(fd, "test\n", 5);

    int fd_1 = dup(fd);
    write(fd_1, "testing dup\n", 12);

    int fd_2 = dup2(fd, 5);
    write(fd_2, "testing dup2\n", 13);

    int fc = fcntl(fd, F_DUPFD);
    write(fc, "testing fcntl\n", 14);

    return 0;
}