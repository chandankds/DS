#include<bits/stdc++.h>
using namespace std;
//now same logic which was present in main can be used to print the hollow things
int main1(){
	int space, rows;
	cout<<"Enter the number of Rows" << endl;
	cin>>rows;
	for(int i=0; i<rows; i++){
		for(int j = 0; j<i; j++){
			cout<<"*";
		}
		cout<<endl;	
	}
	return 0;
}

// Complete Pyramid
int main2(){
	int rows, space;
	cout<<"Enter the number of Rows" << endl;
	cin>>rows;
	space=rows;
	for(int i=0; i<rows; i++){
		for(int j=0; j<space; j++){
			cout<<" ";
		}
		space--;
		for(int k=0; k <=i; k++){
			cout<<"* ";
		}
		cout <<endl;
	}
	
	return 0;
}

//Reverse Pyramid
int main(){
	int rows, space=0;
	cout<<"Enter the number of rows"<<endl;
	cin>>rows;
	for(int i=rows; i>0; i--){
		for(int k=0; k<space; k++){
			cout<<" ";	
		}
		for(int j=0; j<rows; j++){
			cout<<"* ";
		}
		rows--;
		space++;
		cout<<endl;
	}

	return 0;
}


// Complete Hollow  Pyramid
int main3(){
	int rows, space;
	cout<<"Enter the number of Rows" << endl;
	cin>>rows;
	space=rows;
	for(int i=0; i<rows; i++){
		for(int j=0; j<space; j++){
			cout<<" ";
		}
		space--;
		for(int k=0; k <=i; k++){
			if(k==0 || k==i || i==rows-1)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout <<endl;
	}
	
	return 0;
}















































