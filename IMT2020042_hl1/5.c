#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
    char array[5][30] = {"output/5_1.txt", "output/5_2.txt", "output/5_3.txt", "output/5_4.txt", "output/5_5.txt"};
    int fd;
    for (int i = 0; i > -1; i++)
    {
        if (i < 5)
        {
            fd = creat(array[i], O_CREAT);
        }
    }
}