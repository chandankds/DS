#include<bits/stdc++.h>

int main(){
	int i=10;
	int *j=&i;
	printf("value of I :: %d \n",i);
	printf("address of I :: %u \n",&i);
	printf("value pointed by J :: %d \n",*j);
	printf("address stored in by J :: %u \n",j);

	return 0;
}

