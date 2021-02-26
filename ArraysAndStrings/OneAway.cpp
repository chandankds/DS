#include<bits/stdc++.h>
using namespace std;
//#BUG this function is not working for a single character or when the string is of same length but the one character is changed think of a better way
bool one_away(string str1, string str2){
	int len1 = str1.length();
	int len2 = str2.length();
	if(abs(len1 - len2) > 1){
//		cout << "It cannot be one away" << endl;
		return false;
	}
	int arr1[25] = {0};
	int arr2[25] = {0};
	for(int i = 0; i<len1; i++){
		int temp = str1[i] - 'a';
		arr1[temp]++;
	}
	for(int i = 0; i<len2; i++){
		int temp = str2[i] - 'a';
		arr2[temp]++;
	}
	int count = 0;
	for(int i=0; i<26; i++){
		if(arr1[i] != arr2[i]){
			count++;
			cout << "Value of count is :: " << count << " because of :: " << static_cast<char>(i + 'a') << " and :: " << (char)(i+'a') << " Iteration :: " << i << endl;
		}
	}
	for(int i : arr1){cout << i << " " ;}
	cout << endl;
	for(int i : arr2){cout << i << " " ;}
	cout << endl;
	if(count > 1)
		return false;
	else
	return true;
}


int main(){
	string str1, str2;
	cout << "Enter the first string :: " << endl;
	cin >> str1;
	cout << "Enter the second string :: " << endl;
	cin >> str2;
	if(one_away(str1, str2))
		cout << "True it is one away " << endl;
	else
		cout << "False it is not one away" << endl;

	return 0;
}
