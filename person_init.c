#include <stdlib.h>
#include <stdio.h>
struct Person{
	char* name;
	int age;
	struct Person** friends;
};

typedef struct Person person_t;

int main(){
	person_t* smith = (person_t*)malloc(sizeof(person_t));
	person_t* moore = (person_t*)malloc(sizeof(person_t));
	smith->name="Agent Smith";
	smith->age=128;
	smith->friends=(person_t**)malloc(sizeof(person_t*));
	smith->friends[ 0]=moore;
	moore->name="Sonny moore";
	moore->age=256;
	moore->friends=(person_t**)malloc(sizeof(person_t*));
	moore->friends[ 0]=smith;

	printf("%s\n",smith->name);
	printf("%d\n",smith->age);
	printf("%p %p\n",smith,moore->friends[ 0] );
	printf("%s\n",moore->name);
	printf("%d\n",moore->age);
	printf("%p %p\n",moore,smith->friends[ 0] );
	return 0;
}
