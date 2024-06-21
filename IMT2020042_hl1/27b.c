#include<unistd.h>
#include<stdio.h>

int main()
{
  execlp("/bin/ls", "-R","-l", NULL);
}