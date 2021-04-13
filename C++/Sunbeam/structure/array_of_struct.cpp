#include<bits/stdc++.h>

struct emp{
    char name[30];
    int age;
    float salary;
};

int main(){
    struct emp arr[3];
    for(int i=0; i<3; i++){
        printf("Enter the emp name %d :: ",i);
        scanf("%s",arr[i].name);
        printf("Enter the emp age %d :: ",i);
        scanf("%d",&arr[i].age);
        printf("Enter the emp salary %d :: ",i);
        scanf("%f",&arr[i].salary);
    }
    for(int i=0; i<3; i++){
        printf("Entered emp name %d :: %s ",i,arr[i].name);
        printf("Entered emp age %d :: %d, ",i,arr[i].age);
        printf("Entered emp salary %d :: %f, ",i, arr[i].salary);
        printf("\n");
    }
    return 0;
}