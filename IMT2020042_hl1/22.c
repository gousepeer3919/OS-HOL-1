#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
  char buff[1024] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
  int fd = open("fork_write.txt", O_WRONLY);
  fork();
  write(fd, buff, 7);
}