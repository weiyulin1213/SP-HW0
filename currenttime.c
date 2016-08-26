#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* currenttime(){
	char* result=malloc(128);
	if(!result) return result;
	time_t secondsSince1970=time(NULL);
	char* time=ctime(&secondsSince1970);
	strcpy(result,time);
	return result;
}

int main(){
	char* ptr=currenttime();
	printf("%s",ptr);
	free(ptr);
	ptr=NULL;
	return 0;
}
