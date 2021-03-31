#include<bits/stdc++.h>

int main1(){
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


int main22(){
	int rows;
	std::cout<<"Enter the number of rows";
	std::cin>>rows;
	int space = rows;
	for(int i=0; i<rows; i++){
		for(int j=0; j<space ;j++){
			std::cout<<" ";
		}
		space--;
		for(int k = 1; k<i; k++){
			if(k==1 || k==i-1 ){
				std::cout<<k<<" ";
			}
			else
				std::cout<<"  ";
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
			if(k==1 || k==space-1 ){
				std::cout<<k<<" ";
			}
			else
				std::cout<<"  ";
		}
		std::cout<<std::endl;
	}
	return 0;
}

int main(){
	int rows;
	std::cout<<"Enter the number of rows"<<std::endl;
	std::cin>>rows;
	int temp=0;
	for(int i=0; i<rows; i++){
		for(int j=0; j<i; j++){
			std::cout<<"* ";
		}
		std::cout<<std::endl;
	}
	for(int i=rows; i>0; i--){
		for(int j=0; j<i; j++){
			std::cout<<"* ";
		}
		std::cout<<std::endl;
	}
	return 0;
}

