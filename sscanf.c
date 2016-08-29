#include <stdio.h>
#include <stdlib.h>

int main(){
	char *data="Hello 5 world";

	char s1[ 10];
	char s2[ 10];
	int n;
	int result=sscanf(data,"%9s %d %9s",s1,&n,s2);
	printf("Result:%d, %s %d %s\n",result,s1,n,s2);
	return 0;
}
