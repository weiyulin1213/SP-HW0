#include <unistd.h>

int main(){
	write(STDOUT_FILENO,"Hi! My name is Michael.",23);
	return 0;
}
