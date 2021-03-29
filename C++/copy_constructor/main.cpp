#include<bits/stdc++.h>

class Person{
private: 
	char* name;
	int age;
	int* pt;
public: 
	Person(){
		std::cout<<"Default Constructor is called"<<std::endl;
	}
	Person(char* name, int age, int* pt){
		this->name = name;
		this->age = age;
		this->pt = pt;
	}

//	Person(const Person& rhs);    This I tried like in book doesn't work
	Person(const Person& rhs){
		this->name = rhs.name;
		this->age = rhs.age;
		this->pt = rhs.pt;
	}
//	Person& operator=(const Person& rhs);  	same

	
	
	void set(char* name, int age, int* pt){
		this->name = name;
		this->age = age;
		this->pt = pt;
	}

	void print(){
		std::cout<<name<<" :: "<<age<<" :: " <<*pt<<std::endl;
	}
};


int main(){
/*	Person chandan("chandan", 24);   //This is a shallow copy chandan has changed but nandan didn't 
	chandan.print();
	Person nandan = chandan;
	nandan.print();
	chandan.set("chs", 12);
	chandan.print();
	nandan.print();*/
	int val = 10;
	int *pt = &val;
	Person chandan("chandan", 24, pt);
//	Person nandan(chandan);
  	Person nandan = chandan;
	nandan.print();
	*pt = 20;
	chandan.set("chs", 50, pt);
	nandan.print();
	return 0;
}

