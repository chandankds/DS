#include<bits/stdc++.h>

using namespace std;
// This is why i wanted to learn learn debuging i dont know what is happening here but this does not add more than 6 %20
// #TODEBUG
string urlify(string str){
	int len = str.length();
	string fill = "%20";
	for(int i=0; i<=len; i++){
		if(str[i] == ' '){
			str.erase(str.begin() + i);
			str.insert(i, fill);
//			cout << str << endl; 
		}
	}

	return str;
}

// I am choosing string to do this task will love to do it with char* as well dont know for what reason i dont like it.
int main(){
	string str;
	cout << "Enter the String :: " << endl;
	getline(cin, str);
	cout << "Original String :: " << str << endl;
	cout << urlify(str) << endl;	


	return 0;
}

