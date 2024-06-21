#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
    int ret;
    ret= creat("3a",O_CREAT);
    printf("file descriptor: %d\n",ret);
    return 0;

}