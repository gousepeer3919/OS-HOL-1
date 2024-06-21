#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    const char *tar = "3.c";
    const char *lp = "cat";
    const char *pathname = "3.c";
    const char *lk_name = "os";
    const char *fifopath = "3.c";

    int lns = symlink(tar, lp);
    int ln = link(pathname, lk_name);
    int fifo = mknod(fifopath, S_IFIFO, 0666);

    perror(fifopath);
    perror(lk_name);
    perror(lp);

    printf("lns = %d\n", lns);
    printf("ln = %d\n", ln);
    printf("fifo = %d\n", fifo);
    return 0;
}