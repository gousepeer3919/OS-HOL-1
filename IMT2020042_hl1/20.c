#include <stdio.h>
#include <sys/resource.h>
#include <unistd.h>

int main()
{
    int prior = getpriority(0, 0);
    printf("Priority of current process is %d\n", prior);
    int ret = nice(-20); // root
    int changed_priority = getpriority(0, 0);
    printf("Priority of current process is changed to %d\n", changed_priority);
    return 0;
}