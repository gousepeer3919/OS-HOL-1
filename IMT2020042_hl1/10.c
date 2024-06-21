#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int fd;
    fd = open("10.txt" , O_RDWR);
    char buff[20] = "handsonlist\n";
    write(fd,buff,20);

    int ret;
    ret = lseek(fd, 0, SEEK_END);
    printf("lseek value: %d\n", ret);
    write(fd, buff, 20);

    system("od -c 10.txt");

    return 0;
}