struct Person{
	char name[ 100];
	int age;
	struct Person* friends[];
};

typedef struct Person person_t;

int main(){
	return 0;
}
