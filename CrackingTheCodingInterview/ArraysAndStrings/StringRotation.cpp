#include<bits/stdc++.h>

using namespace std;

//function to find string in the string
bool stst(string str1, string str2){
	int len1 = str1.length();
	int len2 = str2.length();
	int right = 0;
	for(int i=0; i<len1; i++){
		if(str1[i] == str2[0]){
			int j = 0;
			for( ; j<len2; j++){
				if(str1[i+j] != str2[j]){
					cout << "Came here for " << str1[i+j] << "and " << str2[j] << endl;
					break;
				}
			}
			if(j == len2)
				return true;
		}
	}
	return false;

}

bool stringContains(string str1, string str2){
	str2 += str2;
	if(stst(str2, str1))
		return true;
	else
		return false;	
}


int main(){
	string str1, str2;
	cout << "Enter the first string :: " << endl;
	cin >> str1;
	cout << "Enter the second sting :: " << endl;
	cin >> str2;
	if(stringContains(str1, str2)){
		cout << "Contains " << endl;
	}else{
		cout << "Not Contains" << endl;
	}



	return 0;
}
