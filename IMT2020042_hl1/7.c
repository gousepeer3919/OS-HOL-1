#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int fd = open(argv[1], O_RDONLY);
    char buff[1024];
    int bytes_read = read(fd, buff, sizeof(buff));
    close(fd);

    int fd1 = open(argv[2], O_WRONLY | O_CREAT, 0744);
    write(fd1, buff, bytes_read);
    close(fd1);

    return 0;
}
