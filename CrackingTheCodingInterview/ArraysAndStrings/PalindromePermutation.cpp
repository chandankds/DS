#include<bits/stdc++.h>
using namespace std;
//Case 1 :- String is even and every character is in pair
//Case 2 :- String is odd and every character is in pair except one lonley character
//Implemetation using Hash Map
bool palindrome_permutation(string str){
	map<char, int> m;
	int len = str.length();
	for(int i=0; i<len; i++){
		if(str[i] != ' '){
			m[str[i]]++;	
		}
	}
	int flag = 0;
	for(auto i : m){
//		cout << i.first << "->" << i.second << endl;
		if(i.second % 2 == 1 && flag == 0){
			flag = 1;
			cout << "came in the pit " << endl;
		} else if(i.second % 2 != 0 && flag == 1){
			return false;
		}else 
			continue;
	}
	return true;
}// Its working fine till you ignore the uppare case characters and special character i have taken care of the space only

//#COMPLETE this function with the array implementation
bool palindrome_permutation1(string str){
	int len = str.length();
	int arr[25] = {0};
}


//The question is not asking to print the palindromes it just wants to know they exits or not.
//#TODO #DIFFICULT trying printing those plaindromes
int main(){
	string str;
	cout << "Enter the String :: " << endl;
	getline(cin, str);
	if(palindrome_permutation(str))
		cout << "True Palindrome can be formed" << endl;
	else
		cout << "False Palindrome can't be formed" << endl;

	return 0;
}
