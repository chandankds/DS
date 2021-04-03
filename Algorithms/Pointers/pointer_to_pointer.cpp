#include<bits/stdc++.h>

int main(){
	int i=10;
	int *ip=&i;
	int *ipp=ip;
	printf("Value of i %d :: value of pointer %d :: vlaue of pointer to pointer %d \n",i,*ip,*ipp);
	printf("address of i is %u \n",&i);
	printf("if i try to print ip it will be %u \n",ip);
	return 0;
}

