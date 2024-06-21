#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    static char *argv[] = {"/bin/ls", "-Rl", NULL};
    execvp(argv[0], argv);
}