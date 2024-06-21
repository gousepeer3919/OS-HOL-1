#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

int main()
{
    fd_set readfds;
    FD_ZERO(&readfds);
    FD_SET(0, &readfds);

    struct timeval to;
    to.tv_sec = 10;
    to.tv_usec = 0;

    int ret;
    ret = select(1, &readfds, NULL, NULL, &to);

    if (ret == 0)
    {
        printf("Data is not available\n");
    }
    else if (ret > 0)
    {
        printf("Data is available\n");
    }

}
