#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char arr[3];
	printf("sizeof \"ab\" is %d\n",sizeof("ab"));
	printf("sizeof \"Hello\\0World\" is %d\n",sizeof("Hello\0World"));
	printf("strlen \"Hello\\0World\" is %d\n",strlen("Hello\0World"));
	return 0;
}
