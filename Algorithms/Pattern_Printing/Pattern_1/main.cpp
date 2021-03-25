#include<bits/stdc++.h>

int main1(){
	for (int i =0; i<3; i++){
		for(int j=0; j<5; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


int main(){
	for (int i =0; i<3; i++){
		for(int j=0; j<5; j++){
			if(i == 0 || i == 2 || j == 0 || j == 4){
				//printf("%d%d ",i,j);
				printf("* ");
			}else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}
