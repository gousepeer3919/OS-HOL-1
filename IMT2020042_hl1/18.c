#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	struct {
		int train_no;
		int tk_count;
	} online_ticket[3];
	for(int i=0;i<3;i++){
		online_ticket[i].train_no=i+1;
		online_ticket[i].tk_count=0;
	}
	int fd;
	fd=creat("online_ticket",0755);
	write(fd,&online_ticket,sizeof(online_ticket));
	close(fd);
}