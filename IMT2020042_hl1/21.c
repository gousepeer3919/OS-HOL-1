#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    int fd = open("fork.txt", O_RDWR | O_CREAT);

    int fk = fork();

    if (!fk)
        write(fd, "This is child\n", 14);
    else
        write(fd, "This is parent\n", 15);
}