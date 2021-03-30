#include<bits/stdc++.h>

void print(int rows){
//	std::cout<<"came in function 1 "<<rows<<std::endl;
	if(rows < 0){
//		std::cout<<"came in if"<<std::endl;
		return;
	}
	rows -= 1;
	print(rows);
//	std::cout<<"came in function 2"<<std::endl;
	int temp = rows;
	while(temp > 0){
		std::cout<<rows<<" ";
		temp--;
	}
//	std::cout<<rows<<" ";
	std::cout<<std::endl;
}

int main(){
	int rows = 0;
	std::cout<<"Enter the number of rows :: ";
	std::cin>>rows;
	print(rows);
	return 0;
}

