#include<bits/stdc++.h>

using namespace std;
// This is why i wanted to learn learn debuging i dont know what is happening here but this does not add more than 6 %20
// #TODEBUG
// #SOLVED The problem was the length of the string was increasing but i did't paid attention to it
string urlify(string str){
	int len = str.length();// dont use this as a static value coz i am appending the string 
	string fill = "%20";
	for(int i=0; i<str.length(); i++){ // BUG if I use len here insted of str.length()
		if(str[i] == ' '){
			str.erase(str.begin() + i);
			str.insert(i, fill);
//			cout << str << endl; 
		}
	}

	return str;
}

//Well trying to do the same thing but from back this time
// #TODEBUG
string urlify1(string str){
	string fill = "%20";
	int len = str.length();
// I guess I understood the problems 1 is the length is changing i somehow need to manage that
	for(int i=str.length(); i>=0 ; i--){
		if(str[i] == ' '){
			str.erase(str.end() - i-1);// This is fine it deletes all the space in the line
			str.insert(i+3, fill);// This creates the problem and it will for sure because after some time the i+3 will be out of bound
		}
	}
	return str;
}
// #TODO In question they wanted to solve in this prototype
string urlify2(string str, int len){

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

