#include<bits/stdc++.h>

int main(){
	int i =10;
	char ch = 'A';
	float pi = 3.14;
	int *ip = &i;
	char *cp = &ch;
	float *fp = &pi;
	printf("value of i :: %d :: value of pointer %d \n",i, *ip);
	printf("value of ch :: %c :: value of pointer %c \n",ch, *cp);
	printf("value of pi :: %f :: value of pointer %f \n",pi, *fp);


	//New compilers wont let us do this but if you do this you are only derefrencing the first byte of the value which is wrong
/*	printf("***************************************\n");
	*ip = (char*)&i;
	*cp = (char*)&ch;
	*fp = (char*)&pi;
	printf("value of i :: %d :: value of pointer %d \n",i, *ip);
	printf("value of ch :: %c :: value of pointer %c \n",ch, *cp);
	printf("value of pi :: %f :: value of pointer %f \n",pi, *fp);
	return 0;
*/
}

