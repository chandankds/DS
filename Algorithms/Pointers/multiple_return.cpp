#include<bits/stdc++.h>

void calculate(int r, float *area, float *circum){
	*area = 3.14 * r * r;
	*circum = 3.14 * 2 * r;
}

int main(){
	int r;
	std::cout<<"Enter the value of R"<<std::endl;
	std::cin>>r;
	float a=0;
	float b=0;
	float *area, *circum;
	area = &a;
	circum = &b;
	calculate(r, area, circum);
	std::cout<<"Area is :: " << *area << std::endl;
	std::cout<<"Circumfreance is :: " << *circum << std::endl;
	return 0;
}

