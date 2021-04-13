#include<stdio.h>
#include<stdlib.h>

struct emp{
    char name[30];
    int age;
    float salary;
};

int main3(){
	struct emp *p = (struct emp*) malloc(sizeof(struct emp)*3);
	
    for(int i=0; i<3; i++){
        printf("Enter the emp name %d :: ",i);
        scanf("%s",(p+i)->name);
        printf("Enter the emp age %d :: ",i);
        scanf("%d",&(p+i)->age);
        printf("Enter the emp salary %d :: ",i);
        scanf("%f",&(p+i)->salary);
    }
    for(int i=0; i<3; i++){
        printf("Entered emp name %d :: %s ",i,(p+i)->name);
        printf("Entered emp age %d :: %d, ",i,(p+i)->age);
        printf("Entered emp salary %d :: %f, ",i, (p+i)->salary);
        printf("\n");
    }
    return 0;
}

int main(){
	printf("came here");
	struct emp* p = (struct emp*) malloc(sizeof(struct emp));
	printf("done struct");
	printf("enter the name :: ");
	scanf("%s", p->name);
	printf("enter the age :: ");
	scanf("%d", &p->age);
	printf("enter the name :: %s", p->name);
	printf("enter the name :: %d", p->age);
	free(p);
	p = NULL;
	return 0;
}
