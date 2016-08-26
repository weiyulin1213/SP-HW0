#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	write(STDOUT_FILENO,"height of triangle:",19);
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++)
			write(STDERR_FILENO,"*",1);
		write(STDERR_FILENO,"\n",1);
	}
	return 0;
}
