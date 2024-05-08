//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename t>
t max_no(t a,t b){
	
	
	if(a>b){
		return a;
	}else {
		return b;
	}
		
	}

int main(){
	cout<<max_no<int>(3,7)<<endl;
}
