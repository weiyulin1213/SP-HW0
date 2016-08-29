#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct Person{
	char* name;
	int age;
	struct Person** friends;
};

typedef struct Person person_t;

person_t* create_person(char* name,int age){
	printf("Creating person name:%s age:%d\n",name, age);
	person_t* result=(person_t*)malloc(sizeof(person_t));
	result->name=strdup(name);
	result->age=age;
	result->friends=NULL;
	return result;
}

void destroy_person(person_t* p){
	printf("Destroying person.\n");
	free(p->name);
	if(p->friends!=NULL){
		printf("freeing friends....\n");
		free(p->friends);
	}
	memset(p,0,sizeof(person_t));
	free(p);
}
int main(){
	person_t* a,*b;
	a=create_person("Michael",23);
	b=create_person("Viola",32);
	a->friends=(person_t**)malloc(sizeof(person_t*));
	a->friends[ 0] = b;
	b->friends=(person_t**)malloc(sizeof(person_t*));
	b->friends[ 0] =a;
	printf("%s\n",a->name);
	printf("%d\n",a->age);
	printf("Michael's friends is %s.\n",a->friends[0]->name);
	printf("%s\n",b->name);
	printf("%d\n",b->age);
	printf("Viola's friends is %s.\n",b->friends[0]->name);
	destroy_person(a);
	destroy_person(b);
	return 0;
}
