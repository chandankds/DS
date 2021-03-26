#include<bits/stdc++.h>
//Half pyramid try to do this in c as well kind of feel difficult
int main1(){
	std::string s = "*";
	for(int i=0; i<6; i++){
		std::cout << s << std::endl;
		s += " *";
	}
	return 0;
}


//Inverted Half pyramid
int main2(){
	std::string s = "* * * * * *";
	for(int i=0; i<6; i++){
		std::cout << s << std::endl;
		//		s -= " *"; This dont work :P can use substr though :)
		s = s.substr(0, s.length()-2);

	}
	return 0;
}

//Hallow inverted pyramid
int main(){
	std::string s = "******";
	for(int i=0; i<6; i++){
		for(int j =0; j<6; j++){
			if(i==0||j==0||j==s.length()-1){
				std::cout<<"*";
			}else
				std::cout<<" ";
		}
		std::cout<<std::endl;
		s = s.substr(0,s.length()-1);
//		std::cout<<s.length()<<std::endl
	}
	return 0;
}
