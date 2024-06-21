#include <sched.h>
#include <stdio.h>

int main()
{    
  int minimum = sched_get_priority_min(SCHED_FIFO);
  int maximum = sched_get_priority_max(SCHED_FIFO);
  printf("Maximum priority is %d\nMinimum priority is %d\n",maximum,minimum );
}