#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
	close(1);
	int fd;
	mode_t mode=S_IRUSR|S_IWUSR;
	fd=open("./hello world.txt",O_TRUNC | O_RDWR | O_CREAT,mode);
	if(fd==-1){
		perror("Open failed");
		exit(1);
	}
	printf("Hi! My name is Michael.\n");
	return 0;
}
