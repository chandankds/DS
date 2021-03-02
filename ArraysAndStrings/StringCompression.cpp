#include<bits/stdc++.h>
#include<string>
using namespace std;

//This one is without using extra string just the printing 
/*
int main(){
	string str;
	cout << "Enter the string :: " << endl;
	cin >> str;
	int len = str.length();
	char present_char;
	int count = 0;
	for(int i=0; i<len; i++){
		if( i == 0){
			present_char = str[i];
			count++;
		}else if(present_char == str[i]){
			count++;
		}else{
			cout << present_char << count;// #TODEBUG I dont know why it does not print the last values
			present_char = str[i];
			count = 1;
		}
	}
	cout << present_char << count << endl; //Well this works but i think there must be a better way to do this

	return 0;
}
*/


int main(){
	string str;
	cout << "Enter the string :: " << endl;
	cin >> str;
	int len = str.length();
	char present_char;
	int count = 0;
	string ans;
	for(int i=0; i<len; i++){
		if( i == 0){
			present_char = str[i];
			count++;
		}else if(present_char == str[i]){
			count++;
		}else{
			ans += present_char;// #TODEBUG I dont know why it does not print the last values
			ans += to_string(count);
			present_char = str[i];
			count = 1;
		}
	}
	ans += present_char;
	ans += to_string(count); //Well this works but i think there must be a better way to do this
	if(ans.length() > len){
		cout << str;
	}else{
		cout << ans << endl;
	}

	return 0;
}
