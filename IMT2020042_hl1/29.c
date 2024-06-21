#include <sched.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid = getpid();
    int si = sched_getscheduler(pid);
    if (si == SCHED_FIFO)
        printf("FIFO\n");
    else if (si == SCHED_RR)
        printf("Round Robin\n");
    else
        printf("Others\n");

    struct sched_param parama;
    parama.sched_priority = 99;
    sched_setscheduler(pid, SCHED_RR, &parama);

    int modified_s = sched_getscheduler(pid);
    if (modified_s == SCHED_FIFO)
        printf("FIFO\n");
    else if (modified_s == SCHED_RR)
        printf("Round Robin\n");
    else
        printf("Others\n");
}