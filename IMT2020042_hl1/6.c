#include <unistd.h>
#include <fcntl.h>
int main()
{
    char buff[1024];
    int bytes_read = read(STDIN_FILENO, buff, sizeof(buff));
    write(STDOUT_FILENO, buff, bytes_read);
    return 0;
}
