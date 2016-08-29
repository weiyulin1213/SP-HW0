#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	//ssize_t getline(char **lineptr, size_t *n, FILE *stream);
	char *buffer=NULL;
	size_t cap=0;
	FILE* fd_in=fopen("./input.txt","r");
	if(fd_in==NULL){
		perror("Read file error:");
		exit(-1);
	}
	ssize_t result;
	while(1){
		result=getline(&buffer, &cap, fd_in);
		if(result>0 && buffer[ result-1]=='\n')
			buffer[ result-1]='\0';
		else if(result==-1)break;
		printf("%s\n",buffer);
	}
	if(buffer!=NULL)
		free(buffer);
	fclose(fd_in);
	return 0;
}
