#include<bits/stdc++.h>
using namespace std;

//easy way sort them all 
bool check_permutation(string str1, string str2){
	int len1 = str1.length();
	int len2 = str2.length();
	if(len1 != len2){
		cout << "String are of different length " << endl;
		return false;	
	}
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	for(int i=0; i<len1; i++){
		if(str1[i] != str2[i])
			return false;
	}
	
	return true;
}
//count the occurance using map
//Shady way to do things but works only assumption i have made is that map maintains order
bool check_permutation1(string str1, string str2){
	int len1 = str1.length();
	int len2 = str2.length();
	map<char, int> m1, m2;
	if(len1 != len2){
		cout << "String are of different length " << endl;
		return false;	
	}
	for(int i=0; i<len1; i++){
		m1[str1[i]]++;
	}
	for(int i=0; i<len2; i++){
		m2[str2[i]]++;
	}
	auto j = m2.begin();
	for(auto i=m1.begin(); i != m1.end(); i++){
//		cout << i->first << " :: " << i->second << endl;
		if((i->first != j->first) || (i->second != j->second)){
			return false;
		}else
			j++;	
	}
/*	cout << "----------------------------" << endl;
	for(auto i=m2.begin(); i != m2.end(); i++){
		cout << i->first << " :: " << i->second << endl;
	}
*/
	return true;
}

int main(){
	string str1 , str2;
	cout << "Enter the string 1 :: " << endl;
	cin >> str1;
	cout << "Enter the string 2 :: " << endl;
	cin >> str2;
	if(check_permutation1(str1, str2)){
		cout << "They are permutation of each other" << endl;
	} else
		cout << "They are not permutation of each other" << endl;
	return 0;
}
