#include <bits/stdc++.h>
using namespace std;

//using the hashMap
bool unique(string str){
	map<char, int> m;
	if(str.length() <= 0){
		cout << "string is empty doing me crazy" << endl;
		return true;	
	}
	int len = str.length();
	for(int i=0; i<len; i++){
		m[str[i]]++;
		for(auto j = m.begin(); j != m.end(); j++){
			if(j->second > 1){
				return false;
			}
		}	
	}
	return true;
}
// using the boolian vector
bool unique2(string str){
	int len = str.length();
	bool arr[25] = {false};
	for(int i =0; i<len; i++){
		int temp = str[i] - 'a';
		if(arr[temp]){
			return false;
		}else
			arr[temp] = true;
	}
	return true;
}

//using the bit vector called bitset
bool unique3(string str){
	bitset<26> bset;
	int len = str.length();
	for(int i = 0; i<len; i++){
		if(bset.test(str[i] - 'a')){
			cout << bset << endl;
			return false;
		}
		bset[str[i] - 'a'] = 1;
	}
	cout << bset << endl;
	return true;
}

int main(){
	string str;
	cout << "Enter the strig " << endl;
	cin >> str;
	if(unique3(str))
		cout << "String is unique" << endl;
	else
		cout << "String is not unique" << endl;
	return 0;
}
