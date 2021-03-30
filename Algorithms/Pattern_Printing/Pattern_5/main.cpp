#include<bits/stdc++.h>

int main(){
	int rows;
	std::cout<<"Enter the number of rows";
	std::cin>>rows;
	int space = rows;
	for(int i=0; i<rows; i++){
		for(int j=0; j<space ;j++){
			std::cout << " ";
		}
		space--;
		for(int k = 1; k<i; k++){
			std::cout<<k<<" ";
		}
		std::cout<<std::endl;	
	}
	space=rows;
	for(int i=0; i<rows; i++){
		for(int j=0; j<=i; j++){
			std::cout<<" ";
		}
		space--;
		for(int k=1; k<space; k++){
			std::cout<<k<<" ";
		}
		std::cout<<std::endl;
	}
	return 0;
}

