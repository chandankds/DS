#include<bits/stdc++.h>
using namespace std;
//They are as in order as in image
int main1(){
	int rows;
	cout<<"Enter the number of rows";
	cin>>rows;
	for(int i=1; i<rows; i++){
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}


int main2(){
	int rows;
	cout<<"Enter the number of rows";
	cin>>rows;
	for(int i=rows; i>0; i--){
		int count=1;
		for(int j=i; j>0; j--){
			cout<<count++<<" ";
		}
		cout<<endl;
	}
	return 0;
}


int main3(){
	int rows;
	cout<<"Enter the number of rows";
	cin>>rows;
	for(int i=rows; i>0; i--){
		int count=1;
		for(int j=i; j>0; j--){
			if(j==i || j==1 || i==rows){
				cout<<count++<<" ";
			}else{
				cout<<"  ";
				count++;
			}
		}
		cout<<endl;
	}
	return 0;
}




int main4(){
	int space, rows;
	cout<<"Enter the number of rows";
	std::cin>>rows;
	space = rows;
	for(int i=0; i<rows; i++){
		int count=1;
		for(int j=0; j<space; j++){
			std::cout<<" ";
		}
		space--;
		for(int k=0; k<=i; k++){
			if(k==0||k==i||i==rows-1){
			std::cout<<count++<<" ";
			}else{
				count++;
				std::cout<<"  ";
			}
		}
		std::cout<<endl;
	}
	return 0;
}


int main(){
	int rows;
	cout<<"Enter the number of rows";
	cin>>rows;
	for(int i=1; i<rows; i++){
		for(int j=1; j<=i; j++){
			if(j==1||j==i||i==rows-1){
				cout<<j<<" ";
			}else{
				cout<<"  ";
			}
		}
		
		cout<<endl;
	}
	return 0;
}


































































