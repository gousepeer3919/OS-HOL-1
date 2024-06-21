#include <stdio.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

int main()
{
    clock_t st_time, end_time;
    st_time = clock();
    getpid();
    end_time = clock();
    float time = ((double)(end_time - st_time)) / CLOCKS_PER_SEC;
    printf("Time taken is %f sec\n", time);
}