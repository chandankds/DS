#include<bits/stdc++.h>

int main(){
	int rows;
	std::cout<<"Enter the number of rows"<<std::endl;
	std::cin>>rows;
	int count = 0;
	for(int i=0; i<rows; i++){
		for(int j=0; j<=i; j++){
			std::cout<<count++<<" ";
		}
		std::cout<<std::endl;
	}
	return 0;
}

