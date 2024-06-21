#include <fcntl.h>
#include <stdio.h>
int main()
{
    int fd;
    char *filename = "3.c";
    fd = open(filename, O_RDWR | O_EXCL);
    printf("fd: %d\n", fd);
    return 0;
}