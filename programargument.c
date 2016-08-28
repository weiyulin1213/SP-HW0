#include <stdlib.h>
#include <stdio.h>

int main(int argc,char* argv[]){
	printf("length of argv is %d\n",argc);
	int count=0;
	while(*argv++){
		count++;
	}
	printf("length of argv is %d\n",count);

	return 0;
}
