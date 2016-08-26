#include <stdio.h>
#include <stdlib.h>

extern char** environ;
int main(){
	char** ptr=environ;
	char *secret=getenv("SECRET");
	printf("The secret is %d, %s\n",(int)secret,secret);
	if(secret == 0){
		exit(0);
	}
	while(*ptr){
		printf("%s\n",*ptr);
		ptr++;
	}
	return 0;
}
