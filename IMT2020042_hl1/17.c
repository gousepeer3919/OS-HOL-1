#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

struct ticket
{
    int ticket_number;
};

int main()
{
    int fd;
    fd = open("Tickets", O_RDWR | O_CREAT);
    struct ticket tk;
    struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;
    lock.l_len = 0;
    lock.l_pid = getpid();

    printf("Critical Section Start\n");
    fcntl(fd, F_SETLKW, &lock);
    lseek(fd, -1 * sizeof(struct ticket), SEEK_END);
    read(fd, &tk, sizeof(struct ticket));
    tk.ticket_number++;
    printf("ticket number %d\n", tk.ticket_number);
    write(fd, &tk, sizeof(struct ticket));
    printf("Critical Section End\n");

    printf("Enter to unlock\n");
    getchar();
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &lock);
    close(fd);
}