#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    static char *argv[] = {"output", NULL};
    execv(argv[0], argv);
}